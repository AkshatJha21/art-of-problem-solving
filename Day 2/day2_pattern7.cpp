#include<iostream>
using namespace std;

// 1
// 2 3
// 3 4 5
// 4 5 6 7

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int count = i;
        int j = 0;
        while (j < i) {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}