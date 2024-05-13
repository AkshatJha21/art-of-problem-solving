#include<iostream>
using namespace std;

// 1
// 2 2
// 3 3 3
// 4 4 4 4

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        int j = 0;
        while (j <= i) {
            cout << i + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}