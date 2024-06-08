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

    int maxm = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1) {
            count++;
            maxm = max(maxm, count);
        } else {
            count = 0;
        }
    }
    
    cout << maxm << endl;
}