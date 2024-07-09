#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int j = 0; j < m; ++j) {
        int columnSum = 0;
        for (int i = 0; i < n; ++i) {
            columnSum += matrix[i][j];
        }
        cout << columnSum << endl;
    }
    return 0;
}