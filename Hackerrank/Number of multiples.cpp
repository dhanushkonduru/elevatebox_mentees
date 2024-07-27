#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


unsigned long long countMultiples(unsigned long long n, unsigned long long x) {
    return n / x;
}

int main() {
    unsigned long long N;
    cin >> N;

    unsigned long long count3 = countMultiples(N, 3);
    unsigned long long count5 = countMultiples(N, 5);
    unsigned long long count15 = countMultiples(N, 15); 

    unsigned long long result = count3 + count5 - count15;
    cout << result << endl;

    return 0;
}