#include<iostream>
#include<vector>
using namespace std;

void leader(vector<int> &arr) {
    int n = arr.size();
    int maxm = INT_MIN;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > maxm) {
            ans.push_back(arr[i]);
        }
        maxm = max(maxm, arr[i]);
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
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

    leader(arr);
}