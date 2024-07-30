#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int longestPrefixSuffix(const string &S) {
    int n = S.length();
    vector<int> lps(n, 0); 
    int length = 0;  
    int i = 1;
    while (i < n) {
        if (S[i] == S[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps[n - 1];
}
int main() {
    string S;
    cin >> S;
    cout << longestPrefixSuffix(S) << endl;
    return 0;
}