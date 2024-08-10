#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node (int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    public:
    Node (int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArrToLL (vector<int> &arr) {
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

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    Node* head = convertArrToLL(arr);
    printLL(head);
    return 0;
}