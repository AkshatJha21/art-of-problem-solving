#include<iostream>
using namespace std;

//       *
//     * *
//   * * *
// * * * *

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        int k = 0;
        while (k < n - i - 1) {
            cout << "  ";
            k++;
        }
        int j = 0;
        while (j <= i) {
            cout << "* ";
            j++;
        }

        cout << endl;
        i++;
    }
}