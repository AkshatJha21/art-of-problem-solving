#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, int> mpp;
    mpp[1] = 2; // {1, 2},
    mpp.insert({3, 1}); // {3, 1}

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    
}