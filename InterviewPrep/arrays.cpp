#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {3, 1, 2, 5, 2};
    int largest = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest) {
            largest = arr[i];
        } 
    }
    cout << largest << endl;
    
    return 0;
}