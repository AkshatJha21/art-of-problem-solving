#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int xor1 = 0, xor2 = 0;
    int index = n - 1;

    for (int i = 0; i < index; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }

    xor1 = xor1 ^ n;

    cout << (xor1 ^ xor2) << endl;
    
}