#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    int zeroCount = 0;
    int totalElements = n * m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    if (zeroCount > totalElements / 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}