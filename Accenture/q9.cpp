// You are given an array of integers
// Your task is to find the longest subarray in which
// elements are first sorted in increasing order and then in decreasing order
// Your program should output the length of the bitonic subarray
// and the elements it contains
// Input:
// 7
// -4 5 6 8 9 7 -5
// Output:
// 7
// -4 5 6 8 9 7 -5
// Input:
// 8
// 1 3 5 2 4 6 3 2
// Output:
// 5
// 2 4 6 3 2

#include<iostream>
#include<vector>
using namespace std;

void findBitonicArray(vector<int> &arr) {
    int n = arr.size();

    if (n == 0) return;

    vector<int> inc(n, 1), dec(n, 1);

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            inc[i] = inc[i - 1] + 1;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1]) {
            dec[i] = dec[i + 1] + 1;
        }
    } 

    int maxLen = 0, start = 0;
    for (int i = 0; i < n; i++) {
        int currentLen = inc[i] + dec[i] - 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
            start = i - inc[i] + 1;
        }
    }

    cout << maxLen << endl;
    for (int i = start; i < start + maxLen; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    findBitonicArray(arr);

    return 0;
}