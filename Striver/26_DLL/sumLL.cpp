#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node (int val, Node* next1) {
        data = val;
        next = next1;
    }

    public:
    Node (int val) {
        data = val;
        next = nullptr;
    }
};

Node* convertArrToDLL (vector<int> & arr) {
    Node* head = new Node(arr[0]);
    Node* traverser = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        traverser->next = temp;
        traverser = temp;
    };
    return head;
}

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* addTwoLL(Node* head1, Node* head2) {
    Node* t1 = head1;
    Node* t2 = head2;
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    int carry = 0;
    while(t1 != NULL || t2 != NULL) {
        int sum = carry;
        if (t1) {
            sum += t1->data;
        }
        if (t2) {
            sum += t2->data;
        }
        Node* newNode = new Node(sum%10);
        carry = sum / 10;
        temp->next = newNode;
        temp = temp->next;

        if (t1) t1 = t1->next;
        if (t2) t2 = t2->next;
    }
    if (carry) {
        Node* carryNode = new Node(carry);
        temp->next = carryNode;
    }
    return dummy->next;
}

int main(){
    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(6);
    arr2.push_back(6);
    arr2.push_back(6);
    arr2.push_back(9);

    Node* head1 = convertArrToDLL(arr1);
    Node* head2 = convertArrToDLL(arr2);
    printLL(head1);
    printLL(head2);
    Node* ans = addTwoLL(head1, head2);
    printLL(ans);
    return 0;
}