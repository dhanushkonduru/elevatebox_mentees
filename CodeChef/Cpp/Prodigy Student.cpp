#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s1,s2;
	int a,b;
    cin >> s1 >> s2 >> a >> b;
    if(a > b) cout << s1;
    else if(b > a) cout << s2;
    else cout << "equal";
}
