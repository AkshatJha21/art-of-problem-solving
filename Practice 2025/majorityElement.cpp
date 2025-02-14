#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> v) {
    int count = 0;
    int elemnt;

    for (int i = 0; i < v.size(); i++) {
        if (count == 0) {
            elemnt = v[i];
            count = 1;
        } else if (v[i] == elemnt) {
            count++;
        } else {
            count--;
        }
    }

    int count1 = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == elemnt) {
            count1++;
        }
    }
    if (count1 > (v.size() / 2)) {
        return elemnt;
    }
    return -1;
}

int main() {

    return 0;
}