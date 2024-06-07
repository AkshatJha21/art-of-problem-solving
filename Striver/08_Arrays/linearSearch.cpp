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

    int index = -1;
    int num;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num) {
            index = i;
        }
    }

    cout << index << endl;
    
}