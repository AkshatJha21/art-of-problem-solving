#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

int longestConsecutiveSequence(vector<int> &arr) {
    int n = arr.size();

    if (n == 0) {
        return 0;
    }

    int longest = 1;
    unordered_set<int> st;

    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    for (auto item : st) {
        if (st.find(item - 1) == st.end()) {
            int count = 1;
            int x = item;
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                count = count + 1;
            }
            longest = max(longest, count);
        }
    }

    return longest;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << longestConsecutiveSequence(arr) << endl;
}