#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int image [n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> image[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m / 2; ++j) {
            int temp = image[i][j];
            image[i][j] = image[i][m - 1 - j];
            image[i][m - 1 - j] = temp;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            image[i][j] = 1 - image[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
}