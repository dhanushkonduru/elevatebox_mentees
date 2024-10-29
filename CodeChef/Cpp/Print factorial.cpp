 #include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n,i = 1,f = 1;
    cin >> n;
    do{
        f = f*i;
        i++;
    }while(i <= n);
    cout << f;
}
