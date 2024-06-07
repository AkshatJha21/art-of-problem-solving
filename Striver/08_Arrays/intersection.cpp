#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n1, n2;
    vector<int> arr1;
    vector<int> arr2;

    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int num;
        cin >> num;
        arr1.push_back(num);
    }

    cin >> n2;
    for (int j = 0; j < n2; j++)
    {
        int num;
        cin >> num;
        arr2.push_back(num);
    }
    

    int i = 0;
    int j = 0;
    vector<int> intArr;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            intArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;

    for (int j = 0; j < n2; j++)
    {
        cout << arr2[j] << " ";
    }
    
    cout << "Intersection: " << endl;
    for (int i = 0; i < intArr.size(); i++)
    {
        cout << intArr[i] << " ";
    }
    
}