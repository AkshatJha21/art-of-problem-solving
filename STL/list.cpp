#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> l;
    l.push_back(2);
    l.emplace_back(2);
    l.push_front(1);
    l.emplace_front(2);
}