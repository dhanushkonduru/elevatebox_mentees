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
    int maxLength = 0, currentLength = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) {
            currentLength++;
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        } else {
            currentLength = 0;
        }
    }
    cout << maxLength << endl;
}


