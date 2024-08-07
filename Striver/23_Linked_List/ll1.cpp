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

int lengthOfLL(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
    return count;
}

int findElement(Node* head, int val) {
    Node* temp = head;
    while(temp) {
        if (temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

int main() {
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(7);

    Node* head = convertArrToLL(arr);
    // cout << head->data;
    // Node* temp = head;
    // while(temp) {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << lengthOfLL(head) << endl;
    cout << findElement(head, 5) << endl;
}