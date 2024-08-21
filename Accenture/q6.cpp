// Given two sorted arrays nums1 and nums2 of size m and n respectively
// return the median of the combined sorted array
// Input: m=2 nums1={1, 2} n=2 nums2={3,4}
// Output: 2.5
// Explanation: Merged array = {1,2,3,4} and median is (2+3)/2 = 2.5
// Input: m=3 nums1={-3,1,5} n=4 nums2={-6,5,7,10}
// Output: 5.0

#include<iostream>
#include<vector>
using namespace std;

double findMedian(vector<int> &nums1, vector<int> &nums2) {
    int m = nums1.size();
    int n = nums2.size();
    vector<int> mergedArr;
    for (int i = 0; i < m; i++) {
        mergedArr.push_back(nums1[i]);
    }
    for (int j = 0; j < n; j++) {
        mergedArr.push_back(nums2[j]);
    }

    sort(mergedArr.begin(), mergedArr.end());

    int totalSize = m + n;
    if (totalSize % 2 == 1) {
        return mergedArr[totalSize / 2];
    } else {
        return (mergedArr[totalSize / 2 - 1] + mergedArr[totalSize / 2]) / 2.0;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> nums1;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums1.push_back(num);
    }

    int m;
    cin >> m;
    vector<int> nums2;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        nums2.push_back(num);
    }

    cout << findMedian(nums1, nums2);
    return 0;
}