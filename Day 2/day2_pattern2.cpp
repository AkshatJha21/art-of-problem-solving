#include<iostream>
using namespace std;

// 3 2 1
// 3 2 1
// 3 2 1

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 0;
    while(i < n) {
        int j = n;
        while(j >= 1){
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}