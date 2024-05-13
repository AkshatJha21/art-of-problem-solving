#include<iostream>
using namespace std;

// D 
// C D
// B C D
// A B C D

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int i = 1;
    while (i <= n) {
        char chr = 'A' + n - i;
        int j = 0;
        while (j < i) {
            cout << chr << " ";
            chr++;
            j++;
        }
        cout << endl;
        i++;
    }
}