#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string S;
    cin >> S;

    int len = S.length();
    for (int i = 0; i < len / 2; i++) {
        char temp = S[i];
        S[i] = S[len - i - 1];
        S[len - i - 1] = temp;
    }
    cout << S << endl;

    return 0;
}
