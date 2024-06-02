#include<iostream>
using namespace std;

int hashArr[10000000];

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Pre-computation
    int hash[1000000] = {0}; //array size is equal to max number + 1
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        // Fetching
        cout << hash[number] << endl;
    }
    
        
}