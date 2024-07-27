#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isHarshad(int num) {
    int originalNum = num;
    int sumOfDigits = 0;
    while (num > 0) {
        sumOfDigits += num % 10;
        num /= 10;
    }   
    return originalNum % sumOfDigits == 0;
}
int main() {
    int N;
    cin >> N;
    if (N < 1 || N > 1000000000) {
        return 1;
    }
    if (isHarshad(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}