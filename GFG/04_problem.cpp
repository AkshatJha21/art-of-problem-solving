#include<iostream>
#include<vector>
using namespace std;

// Find duplicates in an array

vector<int> duplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int index = arr[i] % n;
        arr[index] += n;
    }

    bool flag = false;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        if ((arr[i] / n) > 1) {
            flag = true;
            ans.push_back(i);
        }
    }

    if(!flag) {
        ans.push_back(-1);
    }

    return ans;
}

int main() {
    int arr[] = {2,1,3,2,3};
    int n = 5;

    vector<int> ans = duplicates(arr, n);

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
}