#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n,count = 0;
    cin >> n;
    if(n == 0) cout << 1;
    else{
        if(n < 0){
            n = -n;
        }
    }
    while(n>0){
        n = n/10;
        count++;
    }
    cout << count;
}
