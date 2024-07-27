#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<vector<int>> triangle(N);
    for (int i = 0; i < N; ++i) {
        int value = i + 1;
        for (int j = 0; j <= i; ++j) {
            triangle[i].push_back(value);
            value += N - j - 1;
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}