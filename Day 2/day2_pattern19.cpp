#include<iostream>
using namespace std;

// * * * *
//   * * *
//     * * 
//       * 

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        int k = 0;
        while (k < i) {
            cout << "  ";
            k++;
        };

        int j = n;
        while (j > i) {
            cout << "* ";
            j--;
        }

        cout << endl;
        i++;
    }
}