#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node (int data1, Node* next1, Node* prev) {
        data = data1;
        next = next1;
        back = prev;
    }

    public:
    Node (int data2) {
        data = data2;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArrToDLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void printDLL(Node* head) {
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Head Deletion
Node* deleteHead(Node* head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

// Tail Deletion
Node* deleteTail(Node* head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    Node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;

    delete tail;
    return head;
}

// Position Deletion
Node* deletePosition(Node* head, int k) {
    if (head == NULL) {
        return NULL;
    }
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        if (count == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;
    if (prev == NULL && front == NULL) {
        return NULL;
    } else if (prev == NULL) {
        return deleteHead(head);
    } else if (front == NULL) {
        return deleteTail(head);
    }
    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;

    return head;
}

// Node Deletion
void deleteNode(Node* temp) {
    Node* prev = temp->back;
    Node* front = temp->next;

    if (front == NULL) {
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr;
    delete temp;
}

int main() {
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(7);

    Node* head = convertArrToDLL(arr);
    // head = deletePosition(head, 3);
    deleteNode(head->next);
    printDLL(head);

    return 0;
}