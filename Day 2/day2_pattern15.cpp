#include<iostream>
using namespace std;

// A 
// B C
// C D E
// D E F G

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    char ch = 'A';
    int i = 0;
    while (i < n) {
        char pp = ch + i;
        int j = 0;
        while (j <= i) {
            cout << pp << " ";
            pp++;
            j++;
        }
        cout << endl;
        i++;
    }
}