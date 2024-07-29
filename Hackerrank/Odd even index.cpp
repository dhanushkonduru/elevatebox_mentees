#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string S;
    cin >> S;

    string oddIndex = "";
    string evenIndex = "";

    for (int i = 0; i < S.length(); i++) {
        if (i % 2 != 0) {
            oddIndex += S[i];
        } else {
            evenIndex += S[i];
        }
    }

    cout << oddIndex << evenIndex << endl;

    return 0;
}
