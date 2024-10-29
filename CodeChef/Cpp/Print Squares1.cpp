#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int n,s = 1,t;
    cin >> n;
    while(n > 0){
        t = s*s;
        s++;
        n--;
        cout << t << " ";
    }
    return 0;
}