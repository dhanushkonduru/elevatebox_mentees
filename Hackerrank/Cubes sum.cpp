#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;

    if (N < 1 || N > 102) {
        return 1;
    }
    unsigned long long sum_of_cubes = static_cast<unsigned long long>(N) * (N + 1) / 2;
    sum_of_cubes *= sum_of_cubes;
    cout << sum_of_cubes << endl;
    return 0;
}