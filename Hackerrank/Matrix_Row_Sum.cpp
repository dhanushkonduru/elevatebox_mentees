#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        int rowSum = 0;
        for (int j = 0; j < m; ++j) {
            int element;
            cin >> element;
            rowSum += element;
        }
        cout << rowSum << endl;
    }

    return 0;
}