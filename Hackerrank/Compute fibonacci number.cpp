#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N;
    cin >> N;
    if (N < 1 || N > 20) {
        return 1;
    }
    int result = fibonacci(N);
    cout << result << endl;
    return 0;
}