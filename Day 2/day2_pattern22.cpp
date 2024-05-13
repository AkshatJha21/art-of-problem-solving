#include<iostream>
using namespace std;

// 1 2 3 4
//   2 3 4
//     3 4
//       4 

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

        int j = i + 1;
        while (j <= n) {
            cout << j << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}