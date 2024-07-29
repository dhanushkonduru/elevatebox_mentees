#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string S;
    char ch;
    getline(cin, S);
    cin >> ch;
    
    int count = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == ch) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
