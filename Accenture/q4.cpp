// Given an input string (s) and a pattern (p)
// implement wildcard pattern matching with support for '?' and '*' where:
// '?' Matches any single character
// '*' Matches any sequence of characters (including the empty sequence)
// The matching should convert the entire input string (not partial)
// Input: s="aa" p="a"
// Output: false
// Explanation: 'a' does not match the entire string "aa"
// Input: s="aa" p="*"
// Output: true
// Explanation: '*' matches any sequence
// Input: s="cb" p="?a"
// Output: false
// Explanation: "?" matches "c", but the second letter is "a" which doesn't match "b"

#include <iostream>
#include <string>
using namespace std;

bool isMatch(const string &s, const string &p) {
    int sLen = s.length();
    int pLen = p.length();
    
    int sIdx = 0, pIdx = 0;
    int starIdx = -1, sTmpIdx = -1;
    
    while (sIdx < sLen) {
        // Match single character or '?'
        if (pIdx < pLen && (p[pIdx] == '?' || p[pIdx] == s[sIdx])) {
            sIdx++;
            pIdx++;
        }
        // Match '*'
        else if (pIdx < pLen && p[pIdx] == '*') {
            starIdx = pIdx;
            sTmpIdx = sIdx;
            pIdx++;
        }
        // Last pattern was '*', attempt to match more characters in string
        else if (starIdx != -1) {
            pIdx = starIdx + 1;
            sIdx = sTmpIdx + 1;
            sTmpIdx++;
        }
        // Characters don't match and no '*' to adjust the pattern
        else {
            return false;
        }
    }
    
    // Check if remaining characters in pattern can match an empty sequence
    while (pIdx < pLen && p[pIdx] == '*') {
        pIdx++;
    }
    
    return pIdx == pLen;
}

int main() {
    string s = "aa";
    string p = "*";

    if (isMatch(s, p)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
