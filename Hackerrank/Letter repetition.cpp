#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void printGood(int N) {
    cout << 'G';
    for (int i = 0; i < N; ++i) {
        cout << 'o';
    }
    cout << 'd' << endl;
}

int main() {
    int N;
    cin >> N;
    
    if (N >= 0 && N <= 100) {
        printGood(N);
    }
    
    return 0;
}
