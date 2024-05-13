#include<iostream>
using namespace std;

// 1
// 2 1
// 3 2 1
// 4 3 2 1

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
            count--;
            j++;
        }
        cout << endl;
        i++;
    }
}