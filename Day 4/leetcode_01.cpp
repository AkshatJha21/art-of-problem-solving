#include<iostream>
using namespace std;

// Subtract the Product and Sum of Digits of an Integer

int main() {
    int n = 234;

    int prod = 1;
    int sum = 0;

    while (n != 0) {
        int rem = n % 10;
        prod *= rem;
        sum += rem;
        n /= 10;
    }

    cout << prod - sum << endl;
}