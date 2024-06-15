#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0) {
            ans[negIndex] = nums[i];
            negIndex += 2;
        } else {
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
    }
    return ans;
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

    vector<int> ans = rearrangeArray(arr);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    
    
}