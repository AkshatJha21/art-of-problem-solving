#include<iostream>
#include<map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int low;
    int high;
    for (auto it: mpp) {
        if (it.second < min) {
            min = it.second;
            low = it.first;
        } else if (it.second > max) {
            max = it.second;
            high = it.first;
        }
    }
    cout << low << endl;
    cout << high << endl;
}