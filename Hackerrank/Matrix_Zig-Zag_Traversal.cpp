#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                cout << matrix[i][j] << " ";
            }
        } else {
            for (int j = n - 1; j >= 0; --j) {
                cout << matrix[i][j] << " ";
            }
        }
    }
}