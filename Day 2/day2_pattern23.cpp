#include<iostream>
using namespace std;

//       1
//     2 3
//   4 5 6 
// 7 8 9 10

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 0;
    int count = 1;
    while (i < n) {
        int k = n - i - 1;
        while (k > 0) {
            cout << "  ";
            k--;
        };

        int j = 0;
        while (j <= i) {
            cout << count << " ";
            count++;
            j++;
        }

        cout << endl;
        i++;
    }
}