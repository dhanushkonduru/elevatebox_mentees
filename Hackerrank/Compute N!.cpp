#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int N;
    cin >> N;
    if (N < 0 || N > 10) {
        cout << "The number must be between 0 and 10 inclusive." << endl;
        return 1;
    }
    unsigned long long result = factorial(N);
    cout << result << endl;
    return 0;
}
