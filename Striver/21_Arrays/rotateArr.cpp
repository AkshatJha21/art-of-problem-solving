#include<iostream>
#include<vector>
using namespace std;

void rotateMatrix(vector<vector <int>> &mat) {
    int n = mat.size();

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main() {

}