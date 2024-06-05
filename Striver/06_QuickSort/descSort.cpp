#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j) {
        while (arr[i] >= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] < pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void descSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int part = partition(arr, low, high);
        descSort(arr, low, part - 1);
        descSort(arr, part + 1, high);
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

    descSort(arr, 0, n - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    
}