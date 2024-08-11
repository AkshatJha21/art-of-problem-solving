#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main() {
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(1);

    auto it = st.find(3);
    auto it = st.find(5);
    st.erase(4);
    int count = st.count(1);
    auto it = st.find(3);
    st.erase(it);

    unordered_set<int> us; //stores unique but not in sorted order
    multiset<int> ms; //stores duplicate entries in sorted order
}