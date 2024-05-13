#include<iostream>
using namespace std;

// A B C
// B C D
// C D E

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    char ch = 'A';
    int i = 0;
    while (i < n) {
        char chr = ch + i;
        int j = 0;
        while (j < n) {
            cout << chr << " ";
            chr++;
            j++;
        }
        cout << endl;
        i++;
    }
}