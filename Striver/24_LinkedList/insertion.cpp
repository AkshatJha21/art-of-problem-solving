#include<iostream>
#include<vector>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArrToLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Head Insertion
Node* insertHead(Node* head, int value) {
    Node* temp = new Node(value);
    temp->next = head;
    return temp;
}

// Tail Insertion
Node* insertTail(Node* head, int value) {
    if (head == NULL) {
        return new Node(value);  
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    Node* tail = new Node(value);
    temp->next = tail;
    return head;
}

// Position Insertion
Node* insertAtPosition(Node* head, int k, int value) {
    if (head == NULL) {
        if (k == 1) {
            return new Node(value);
        } else {
            return head;
        }
    }
    if (k == 1) {
        Node* newHead = new Node(value);
        newHead->next = head;
        return newHead;
    }
    int count = 0;
    Node* temp = head;
    while(temp != NULL) {
        count++;
        if (count == k - 1) {
            Node* x = new Node(value);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main() {
    vector<int> arr;
    arr.push_back(13);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(10);
    arr.push_back(7);

    Node* head = convertArrToLL(arr);
    head = insertAtPosition(head, 6, 100);
    printLL(head);
}