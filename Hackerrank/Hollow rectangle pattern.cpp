#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int W, L;
    cin >> W >> L;
    for (int i = 0; i < W; ++i) {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i < L - 1; ++i) {
        cout << "*";
        for (int j = 1; j < W - 1; ++j) {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for (int i = 0; i < W; ++i) {
        cout << "*";
    }
    cout << endl;
    return 0;
}