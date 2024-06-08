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

    int xorVal = 0;
    for (int i = 0; i < n; i++)
    {
        xorVal = xorVal ^ arr[i];
    }
    
    cout << xorVal << endl;
}