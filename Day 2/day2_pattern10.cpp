#include<iostream>
using namespace std;

// A B C
// A B C
// A B C

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    char ch = 'A';
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            char chr = ch + j;
            cout << chr << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}