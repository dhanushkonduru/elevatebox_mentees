#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int findMissingNumber(const int numbers[], int size) {
    int n = 100;
    int totalSum = n * (n + 1) / 2;
    int listSum = accumulate(numbers, numbers + size, 0);
    return totalSum - listSum;
}

int main() {
    int numbers[99];
    for (int i = 0; i < 99; ++i) {
        cin >> numbers[i];
    }
    
    int missingNumber = findMissingNumber(numbers, 99);
    cout << missingNumber << endl;
    
    return 0;
}
