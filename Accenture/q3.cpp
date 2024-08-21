// Given an array A of size N that contains only non-negative integers
// Find a continuous sub-array that adds to a given number S
// and return the left and right indices of that sub-array
// In case of multiple sub-arrays, return sub-array that comes first (from l to r)
// (1-based indexing, return an array list of two elements, left & right)
// If no subarray exists, return array containing only -1
// Input: N = 5, S = 12, A[5] = {1,2,3,7,5}
// Output: 2 4
// Input: N = 3, S = 22, A[3] = {1,4,5}
// Output: -1
#include<iostream>
#include<vector>
using namespace std;

vector<int> subArraySum(vector<int> &arr, int n, int sum) {
    int currentSum = 0;
    int start = 0;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        while (currentSum > sum && start <= i) {
            currentSum -= arr[start];
            start++;
        }

        if (currentSum == sum) {
            ans.push_back(start + 1);
            ans.push_back(i + 1);
            break;
        }
    }

    if (ans.size() == 0) {
        ans.push_back(-1);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    vector<int> result = subArraySum(arr, n, sum);

    for (int o = 0; o < result.size(); o++) {
        cout << result[o] << " ";
    }

    return 0;
}