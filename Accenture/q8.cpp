// In a competitive gardening contest, 
// participants are provided with a list of plant heights 
// represented as positive numbers in a single-line array, 
// each value separated by spaces. 
// Identify the most significant difference in height between any two plants.
// The challenge is to select a pair of plants, denoted as (i, j). 
// The subtracted value of i and j should be the maximum 
// when compared with different values of i and j in the array, 
// and also the value of j should be greater than the value of i.
// Input :
// 8 // size of array
// 9 10 2 6 7 12 8 1
// Output :
// 5
// Explanation :
// The difference between values 0 and 5 is 5. 
// If i is equal to 0 and j is equal to 5 it also satisfies j > i.

#include<iostream>
#include<vector>
using namespace std;

int maxHeightDifference(vector<int> &plants, int size) {
    if (size < 2) return 0;

    int minHeight = plants[0];
    int maxDiff = 0;

    for (int i = 1; i < size; i++) {
        int diff = plants[i] - minHeight;
        if (diff > maxDiff) {
            maxDiff = max(diff, maxDiff);
        }
        if (plants[i] < minHeight) {
            minHeight = plants[i];
        }
    }

    return maxDiff;
}

int main() {
    int size;
    cin >> size;
    vector<int> plants;
    for (int i = 0; i < size; i++) {
        int num;
        cin >> num;
        plants.push_back(num);
    }

    cout << maxHeightDifference(plants, size);
    return 0;
}