#include<iostream>
using namespace std;

// 1 2 3
// 4 5 6
// 7 8 9

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 1;
    int i = 0;
    while (i < n) {
        int j = 0;
        while(j < n) {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}