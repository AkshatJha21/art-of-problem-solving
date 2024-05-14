#include<iostream>
using namespace std;

// Find missing number in an array

int sumArr(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n = 5;
    int arr[4] = {2, 1, 4, 5};

    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    };
    cout << "Expected: " << total << endl;

    int sum = sumArr(arr, 4);
    cout << "Obtained: " << sum << endl;
    
    cout << total - sum << endl;
}