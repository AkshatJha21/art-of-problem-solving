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
    vector<int> unionArr;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        } else {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2) {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
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
    
    cout << "Union: " << endl;
    for (int i = 0; i < unionArr.size(); i++)
    {
        cout << unionArr[i] << " ";
    }
    
}