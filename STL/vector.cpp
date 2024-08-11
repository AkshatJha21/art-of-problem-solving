#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(2);
    vec.emplace_back(4);
    vector<int> v(5, 100);

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << endl;
    }

    for (auto it: v) {
        cout << it << " ";
    }

    v.erase(v.begin()+1);
    v.insert(v.begin()+1, 2);
}