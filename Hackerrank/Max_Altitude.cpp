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
    int currentAltitude = 0;
    int highestAltitude = 0;
    for (int i = 0; i < n; ++i) {
        currentAltitude += a[i];
        if (currentAltitude > highestAltitude) {
            highestAltitude = currentAltitude;
        }
    }
    cout << highestAltitude << endl;
} 