#include<iostream>
#include<vector>
using namespace std;

int buySellStock(vector<int> &arr) {
    int n = arr.size();
    int minm = arr[0];
    int profit = 0;

    for (int i = 1; i < n; i++)
    {
        int cost = arr[i] - minm;
        profit = max(cost, profit);
        minm = min(minm, arr[i]);
    }
    return profit;
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

    cout << buySellStock(arr) << endl;
    
    return 0;
}