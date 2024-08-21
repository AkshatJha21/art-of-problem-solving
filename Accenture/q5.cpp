// Given two strings word1 and word2 
// return the minimum number of operations required to convert word1 to word2
// Following 3 options are permitted:
// 1. Insert a character
// 2. Delete a character
// 3. Replace a character
// Input: horse ros
// Output: 3
// Explanation: horse -> rorse (replace 'h' with 'r')
// Explanation: horse -> rose (remove 'r')
// Explanation: horse -> ros (remove 'e')
// Input: intention execution
// Output: 5

#include<iostream>
#include<string>
using namespace std;

int minDHelper(string &word1, int m, string &word2, int n) {
    if (m == 0) return n;
    if (n == 0) return m;

    if (word1[m - 1] == word2[n - 1]) {
        return minDHelper(word1, m - 1, word2, n - 1);
    } else {
        int insertOp = minDHelper(word1, m, word2, n - 1);
        int deleteOp = minDHelper(word1, m - 1, word2, n);
        int replaceOp = minDHelper(word1, m - 1, word2, n - 1);

        return 1 + min(insertOp, min(deleteOp, replaceOp));
    }
}

int minOperations(string &word1, string &word2) {
    return minDHelper(word1, word1.length(), word2, word2.length());
}

int main() {
    string word1;
    cin >> word1;
    string word2;
    cin >> word2;

    cout << minOperations(word1, word2);
}