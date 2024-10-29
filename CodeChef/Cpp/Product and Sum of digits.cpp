#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n,sum = 0,product = 1;
    cin >> n;
    while(n != 0){
        sum += (n % 10);
        product = product * (n % 10);
        n /= 10;
    }
    cout<< sum<< " " << product<<"\n";
}
