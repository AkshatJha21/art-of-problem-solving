#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node (int val, Node* front, Node* back) {
        data = val;
        next = front;
        prev = back;
    }

    public:
    Node (int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
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
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Reverse a DLL

Node* reverseDLL(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* last = NULL;
    Node* current = head;
    while (current != NULL) {
        last = current->prev;
        current->prev = current->next;
        current->next = last;
        current = current->prev;
    }
    return last->prev;
}

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    Node* head = convertArrToDLL(arr);
    head = reverseDLL(head);
    printDLL(head);
    return 0;
}