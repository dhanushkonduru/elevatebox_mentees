#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string S;
    cin >> S;

    int vowelsCount = 0;
    int consonantsCount = 0;

    for (char ch : S) {
        char lowerCh = tolower(ch);

        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            vowelsCount++;
        } else if ((lowerCh >= 'a' && lowerCh <= 'z')) {
            consonantsCount++;
        }
    }

    cout << vowelsCount << " " << consonantsCount << endl;

    return 0;
}
