#include<iostream>
#include<stack>
using namespace std;


int main () {
    stack<int> ss;
    ss.push(1);
    ss.push(1);
    ss.push(1);
    ss.emplace(2);
    cout << ss.top();
    ss.pop();
    ss.size();
    cout << ss.empty();
    stack<int> st1, st2;
    st1.swap(st2);
}