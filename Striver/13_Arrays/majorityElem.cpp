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

int optimalMajority(vector<int> arr) {
    int count = 0;
    int elem;
    for (int i = 0; i < arr.size(); i++)
    {
        if (count == 0) {
            count = 1;
            elem = arr[i];
        } else if (arr[i] == elem) {
            count++;
        } else {
            count--;
        }
    }
    int major = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == elem) {
            major++;
        }
    }
    if (major > (arr.size() / 2)) {
        return elem;
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