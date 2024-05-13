#include<iostream>
using namespace std;

// A B C
// D E F
// G H I

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    char ch = 'A';
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}