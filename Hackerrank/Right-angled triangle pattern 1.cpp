#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int counter = 1;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << counter << " ";
            ++counter;
        }
        cout << endl;
    }
    return 0;
}