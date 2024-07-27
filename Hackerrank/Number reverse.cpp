#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long reverseNumber(long long num) {
    long long reversedNum = 0;
    bool isNegative = num < 0;
    num = abs(num);

    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return isNegative ? -reversedNum : reversedNum;
}

int main() {
    long long N;
    cin >> N;

    cout << reverseNumber(N) << endl;

    return 0;
}