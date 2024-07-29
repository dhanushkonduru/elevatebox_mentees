#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string S;
    cin >> S;

    bool onlyDigits = true;

    for (int i = 0; i < S.length(); i++) {
        if (!isdigit(S[i])) {
            onlyDigits = false;
            break;
        }
    }

    if (onlyDigits) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}