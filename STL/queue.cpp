#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(1);
    q.emplace(1);
    q.back() += 5;
    q.front() += 1;
    q.pop();
}