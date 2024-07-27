#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isNarcissistic(int num) {
    if (num == 0) return true; // Special case for 0
    
    int originalNum = num;
    int sum = 0;
    int numDigits = log10(num) + 1;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    return sum == originalNum;
}

int main() {
    int N;
    cin >> N;
    if (N < 0 || N > 1000000000) {
        return 1;
    }
    if (isNarcissistic(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}