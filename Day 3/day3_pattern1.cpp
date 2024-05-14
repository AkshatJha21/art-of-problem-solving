#include<iostream>
using namespace std;

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
// for n = 5

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        int j = 1;
        while (j <= n - i) {
            cout << j << " ";
            j++;
        }

        int k = 0;
        while (k < i) {
            cout << "* * ";
            k++;
        }

        int l = n - i;
        while (l > 0) {
            cout << l << " ";
            l--;
        }

        cout << endl;
        i++;
    };

    // code here
}