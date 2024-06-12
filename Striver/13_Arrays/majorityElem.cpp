#include<iostream>
#include<map>
#include<vector>
using namespace std;

int majorityElement(vector<int> arr) {
    map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it: mpp) {
        if (it.second > (arr.size() / 2)) {
            return it.first;
        }
    }
    return -1;
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

    cout << majorityElement(arr) << endl;
}