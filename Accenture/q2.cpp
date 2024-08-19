// You have been given a string having space-separated multiple words
// Reprint the string after removing the characters that occur more than once
// Supposed to remove the later occurences of a character
// Input 'aaaaaaaaa' Output 'a'
// Input 'quick fox jumps lake' Output 'quick foxjmpslae'

#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

string removeDuplicates(const string &s) {
    unordered_set<char> inString;
    string ans;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (inString.find(ch) == inString.end()) {
            ans += ch;
            inString.insert(ch);
        }
    }
    return ans;
}

int main() {
    string input;
    cout << "Enter string: " << endl;
    cin >> input;

    string ans = removeDuplicates(input);
    cout << ans << endl;
    return 0;
}