#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool prime;
    int i = 2;

    if(n == 2) {
        prime = true;
    }

    while (i < n)
    {
        if (n % i == 0) {
            prime = false;
            cout << "Not Prime" << endl;
            break;
        } else {
            prime = true;
        }
        i++;
    }

    if (prime) {
        cout << "Prime" << endl;
    }
    
}