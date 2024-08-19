// When a particular range is given to Kyle, 
// he writes down all the values within that range
// which consists of unique digits
// Input 10 30
// Output 10 12 13 14 15 16 17 18 19 20 21 23 24 25 26 27 28 29 30
// Explanation: 11 and 22 not returned as their digits are repeated (same for 100)

#include<iostream>
#include<set>
using namespace std;

bool checkRepeat(int num) {
    set<int> digits;
    while (num > 0) {
        int units = num % 10;
        if (digits.find(units) != digits.end()) {
            return false;
        }
        digits.insert(units);
        num = num / 10;
    }
    return true;
}

int main() {
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (checkRepeat(i)) {
            cout << i << " ";
        }
    }
    return 0;
}