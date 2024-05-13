#include<iostream>
using namespace std;

//Find the minimum and maximum element in the array

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
    }

    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
    }
    
    cout << "Minimum: " << minNum << endl;
    cout << "Maximum: " << maxNum << endl;

}