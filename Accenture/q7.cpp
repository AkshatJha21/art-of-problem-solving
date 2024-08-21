// Given a number find its corresponding Roman numeral
// Input: 9
// Output: IX
// Input: 40
// Output: XL
// List of Roman symbols -> I: 1, IV: 4, V: 5, IX: 9, X: 10, XL: 40,
// L: 50, XC: 90, C: 100, CD: 400, D: 500, CM:900, M: 1000

#include<iostream>
#include<string>
#include<vector>
using namespace std;

string romanNumber(int num) {
    vector< pair<int, string> > symbols;
    symbols.push_back(make_pair(1000, "M"));
    symbols.push_back(make_pair(900, "CM"));
    symbols.push_back(make_pair(500, "D"));
    symbols.push_back(make_pair(400, "CD"));
    symbols.push_back(make_pair(100, "C"));
    symbols.push_back(make_pair(90, "XC"));
    symbols.push_back(make_pair(50, "L"));
    symbols.push_back(make_pair(40, "XL"));
    symbols.push_back(make_pair(10, "X"));
    symbols.push_back(make_pair(9, "IX"));
    symbols.push_back(make_pair(5, "V"));
    symbols.push_back(make_pair(4, "IV"));
    symbols.push_back(make_pair(1, "I"));
       
    string result = "";
    for (int i = 0; i < 13; i++) {
        while (num >= symbols[i].first) {
            result += symbols[i].second;
            num -= symbols[i].first;
        }
    }
    return result;
}

int main() {
    int num;
    cin >> num;

    cout << romanNumber(num);
    return 0;
}