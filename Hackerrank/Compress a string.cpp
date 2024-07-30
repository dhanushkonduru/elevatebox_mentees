#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void compressString(const string &S) {
    int len = S.length();
    for (int i = 0; i < len; ++i) {
        int count = 1;
        while (i + 1 < len && S[i] == S[i + 1]) {
            ++i;
            ++count;
        }
        cout << S[i] << count;
    }
    cout << endl;
}

int main() {
    string S;
    cin >> S;
    compressString(S);
    return 0;
}
