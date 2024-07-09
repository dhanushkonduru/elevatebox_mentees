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
    int count[n] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i] == a[j]) {
                count[i]++;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (count[i] == 1) {
            cout << a[i] << " ";
        }
    }
    return 0;
}