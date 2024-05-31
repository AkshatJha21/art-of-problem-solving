#include<iostream>
using namespace std;

void print(int i, int n) {
    if (i > n) {
        return;
    }
    cout << i << endl;
    print(i + 1, n);
}

void reversePrint(int i, int n) {
    if (i < 1) {
        return;
    }

    cout << i << endl;
    reversePrint(i - 1, n);
}

int main() {
    int n;
    cin >> n;
    print(1, n);
    reversePrint(n, n);
}