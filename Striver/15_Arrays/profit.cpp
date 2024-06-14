#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &prices) {
    int minm = prices[0];
    int profit = 0;

    for (int i = 0; i < prices.size(); i++) {
        int cost = prices[i] - minm;
        profit = max(profit, cost);
        minm = min(minm, prices[i]);
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

    cout << maxProfit(arr) << endl;
    
}