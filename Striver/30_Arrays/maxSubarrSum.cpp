#include<iostream>
#include<vector>
using namespace std;

void maxSum(vector<int> &arr) {
    int n = arr.size();
    int sum = 0;
    int maxm = INT_MIN;
    int start, ansB = -1, ansE = -1;

    for (int i = 0; i < n; i++)
    {
        if (sum == 0) {
            start = i;
        }
        sum += arr[i];
        
        if (sum > maxm) {
            maxm = sum;
            ansB = start;
            ansE = i;
        }

        if (sum < 0) {
            sum = 0;
        }
    }
    
    for (int i = ansB; i <= ansE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << maxm << endl;
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

    maxSum(arr);
    
    return 0;
}