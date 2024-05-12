#include<iostream>
using namespace std;

// PROBLEM STATEMENT: 
// Search an Element in an array
// Given an integer array and another integer element. 
// The task is to find if the given element is present in array or not.

 int search(int arr[], int N, int X){
    bool inArr = false;
    for (int i = 0; i < N; i++) {
            if (arr[i] == X) {
                inArr = true;
            }
            
            if(inArr) {
                return i;
            }
        }
        if (!inArr) {
            return -1;
        }
}

int main() {
    int n;

    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x;
    cout << "Enter number to be searched : ";
    cin >> x;
    cout << endl;

    int ans = search(arr, n, x);

    cout << ans << endl;
}