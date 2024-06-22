#include<iostream>
#include<vector>
using namespace std;

void nextPermutation(vector<int> &arr) {
    int ind = -1;
    int n = arr.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1]) {
            ind = i;
            break;
        }
    }

    if (ind == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }
    
    for (int i = n - 1; i >= ind; i--) {
        if (arr[i] > arr[ind]) {
            swap(arr[i], arr[ind]);
            break;
        }
    }

    reverse(arr.begin() + ind + 1, arr.end());
    return;
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

    nextPermutation(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}