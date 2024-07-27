#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    if (N < 1 || N > 1000) {
        return 1;
    }
    unsigned long long sum_of_squares = static_cast<unsigned long long>(N) * (N + 1) * (2 * N + 1) / 6;
    cout << sum_of_squares << endl;

    return 0;
}