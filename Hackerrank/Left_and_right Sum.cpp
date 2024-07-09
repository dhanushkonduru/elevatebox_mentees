#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int leftSum, rightSum;
    int b[n];
    for (int i = 0; i < n; ++i) {
        leftSum = 0;
        rightSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += a[j];
        }
        for (int j = i + 1; j < n; ++j) {
            rightSum += a[j];
        }
        b[i] = abs(leftSum - rightSum);
    }
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
}
