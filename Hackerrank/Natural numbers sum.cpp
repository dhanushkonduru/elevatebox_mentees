#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    if (N < 1 || N > 10000) {
        return 1;
    }
    unsigned long long sum = static_cast<unsigned long long>(N) * (N + 1) / 2;
    cout << sum << endl;
    return 0;
}