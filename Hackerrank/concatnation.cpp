#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n],b[2*n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        b[i]=a[i];
        b[i+n]=a[i];
    }
    for(int i=0; i<2*n; i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
