#include<iostream>
using namespace std;

long long maxSubarrSum(int arr[], int n) {
    long long sum = 0, maxm = LONG_MIN;

    int ansStart = -1, ansEnd = -1;

    for (int i = 0; i < n; i++)
    {
        int start;
        if (sum == 0) {
            start = i;
        }

        sum += arr[i];

        if (sum > maxm) {
            maxm = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    if (maxm < 0) {
        maxm = 0;
    }
    
    cout << "From: " << ansStart << " To: " << ansEnd << endl;
    
    return maxm;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxSubarrSum(arr, n) << endl;
    
}