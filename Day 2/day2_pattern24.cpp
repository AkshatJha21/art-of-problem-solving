#include<iostream>
using namespace std;

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        int k = n - i - 1;
        while (k > 0) {
            cout << "  ";
            k--;
        };

        int j = 0;
        while (j <= i) {
            cout << j + 1 << " ";
            j++;
        }

        int l = i;
        while (l > 0) {
            cout << l << " ";
            l--;
        }

        cout << endl;
        i++;
    }
}