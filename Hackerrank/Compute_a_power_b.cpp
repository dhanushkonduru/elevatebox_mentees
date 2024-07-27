#include <iostream>
using namespace std;

int main() {
    int a, b, res = 1;
    cin >> a >> b;

    for (int i = 0; i < b; ++i) {
        res *= a;
    }

    cout << res << endl;
    return 0;
}