#include<iostream>
#include<vector>
using namespace std;

void colName(int col) {
    vector<char> tag;
    while (col != 0) {
        int rem = col % 26;    
        char ch = 90 - (65 + rem) - 1;
        tag.push_back(ch);
        col = col / 26;
    }

    int n = tag.size();
    for (int i = n - 1; i >= 0; i--) {
        cout << tag[i];
    }
}

int main() {
    int col;
    cin >> col;

    colName(col);
    return 0;
}