#include<iostream>
using namespace std;

// A 
// B B 
// C C C

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    char ch = 'A';
    int i = 0;
    while (i < n) {
        char chr = ch + i;
        int j = 0;
        while (j <= i) {
            cout << chr << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}