#include<iostream>
#include<map>
#include<vector>
using namespace std;

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
    
}