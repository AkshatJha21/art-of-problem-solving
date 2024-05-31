#include<iostream>
#include<utility>
#include<vector>
using namespace std;

void print() {
    cout << "AJ" << endl;
}

int main() {
    // int a;
    // cin >> a;
    // cout << a;

    // print();

    // pair<int, int> p;
    // p.first = 1;
    // p.second = 2;
    // cout << p.first << " " << p.second << endl;

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<int> v1(5);
    vector<int> v2(5, 100);
    vector<int> v3(v2);

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v3.rend();
    // vector<int>::iterator it = v.rbegin();

    for (auto it = v.begin(); it != v.end(); it++) 
    {
        cout << *(it) << endl;
    }

    for (auto it : v) {
        cout << it << " ";
    }

    v.erase(v.begin()+1);
    cout << v.size();
    v.clear();
    

    return 0;
}