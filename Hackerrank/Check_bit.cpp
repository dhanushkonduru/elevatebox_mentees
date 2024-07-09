#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i;
    cin >> n >> i;
    int mask = 1 << i;
    bool isSet = (n & mask) != 0;
    if (isSet) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}