#include<iostream>
#include<vector>
using namespace std;

void rearrangeSigns(vector<int> &arr) {
    int n = arr.size();
    vector<int> ans(n, 0);

    int pos = 0, neg = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0) {
            ans[neg] = arr[i];
            neg += 2;
        } else {
            ans[pos] = arr[i];
            pos += 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    
}

void method2(vector<int> &arr) {
    vector<int> pos, neg;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0) {
            neg.push_back(arr[i]);
        } else {
            pos.push_back(arr[i]);
        }
    }

    if (pos.size() > neg.size()) {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }

        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[index] = pos[i];
            index++;
        }
        
        
    } else {
        for (int i = 0; i < pos.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }

        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    
    method2(arr);

    return 0;
}