#include<iostream>
#include<map>
#include<vector>
using namespace std;

void twoSum(vector<int> &arr, int sum) {
    map<int, int> mpp;
    int n = arr.size();
    bool yes = false;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int rem = sum - a;
        if(mpp.find(rem) != mpp.end()) {
            yes = true;
            cout << mpp[rem] << " " << i << endl;
        }
        mpp[a] = i;
    }
    if (!yes) {
        cout << "-1 -1" << endl;
    }
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

    int sum;
    cin >> sum;

    bool yes = false;

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int rem = sum - a;

        if(mpp.find(rem) != mpp.end()) {
            yes = true;
        }
        mpp[a] = i;
    }
    if(yes) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    twoSum(arr, sum);
    
}