#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
    
        for (char ch = 'A'; ch < 'A' + i + 1; ch++) {
            cout << ch << " ";
        }
        
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}