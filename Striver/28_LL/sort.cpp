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
    Node (int data2) {
        data = data2;
        next = nullptr;
    }
};

Node* convertArrToLL (vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL (Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* sortLL (Node* head) {
    if (!head || !head->next) return head;

    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
    
    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == 0) {
            zero->next = temp;
            zero = zero->next;
        } else if (temp->data == 1) {
            one->next = temp;
            one = one->next;
        } else {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    zero->next = (oneHead->next) ? (oneHead->next) : (twoHead->next);
    one->next = twoHead->next;
    two->next = NULL;

    Node* newHead = zeroHead->next;
    delete zeroHead; 
    delete oneHead; 
    delete twoHead;

    return newHead; 
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    Node* head = convertArrToLL(arr);
    head = sortLL(head);
    printLL(head);
}