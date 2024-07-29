#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(j == N - i - 1) {
                cout << "*";
            } else {
                cout << N - j;
            }
        }
        cout << endl;
    }
    
    return 0;
}
