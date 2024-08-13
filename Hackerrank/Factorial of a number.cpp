#include <iostream>
using namespace std;
int fac(int n)
{
    if (n == 0)
        return 1;
    return n * fac(n - 1); 
}
int main()
{
    int n;
    cin >> n;
    if (n < 0)
        cout << "Error";
    else
    {
        cout << fac(n);
    }
    return 0;
}
