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

int main() {
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(7);

    Node* head = convertArrToDLL(arr);
    head = deleteHead(head);
    printDLL(head);

    return 0;
}