#include<iostream>
using namespace std;

// Fibonacci Number

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int n1 = fibonacci(n - 1);
    int n2 = fibonacci(n - 2);
    return n1 + n2;
}

int main() {
    int n;
    cin >> n;

    cout << fibonacci(n);
}