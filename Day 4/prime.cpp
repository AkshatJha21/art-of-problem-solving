#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        cout << "Prime" << endl;
    } else {
        cout << "Not a prime" << endl;
    }
}