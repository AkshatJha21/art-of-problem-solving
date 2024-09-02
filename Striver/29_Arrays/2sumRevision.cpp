#include<iostream>
#include<vector>
#include<map>
using namespace std;

void method1 (vector<int> &arr, int total) {
    map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++)
    {
        int a = arr[i];
        int rem = total - a;
        if (mpp.find(rem) != mpp.end()) {
            cout << "Yes" << endl;
            return;
        }
        mpp[a] = i;
    }
    cout << "No" << endl;
    return;
}

void method2 (vector<int> &arr, int total) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == total) {
            cout << "Yes" << endl;
            return;
        } else if (sum < total) {
            left++;
        } else {
            right--;
        }
    }
    cout << "No" << endl;
    return;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int k;
    cin >> k;

    method2(arr, k);

    return 0;
}