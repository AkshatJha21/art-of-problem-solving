#include<iostream>
using namespace std;

int secondLarget(int arr[], int n) {
    int max = arr[0];
    int sMax = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max) {
            sMax = max;
            max = arr[i];
        } else if (arr[i] < max && arr[i] > sMax) {
            sMax = arr[i];
        }
    }
    return sMax;
}

int secondSmallest(int arr[], int n) {
    int min = arr[0];
    int sMin = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            sMin = min;
            min = arr[i];
        } else if (arr[i] != min && arr[i] < sMin) {
            sMin = arr[i];
        }
    }
    return sMin;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout << secondLarget(arr, n) << endl;
    cout << secondSmallest(arr, n) << endl;
    
}