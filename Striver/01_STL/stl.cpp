#include<iostream>
#include<utility>
#include<vector>
using namespace std;

void print() {
    cout << "AJ" << endl;
}

int main() {
    int a;
    cin >> a;
    cout << a;

    print();

    pair<int, int> p;
    p.first = 1;
    p.second = 2;
    cout << p.first << " " << p.second << endl;

    return 0;
}