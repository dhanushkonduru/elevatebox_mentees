#include <stdio.h>

int main() {
	// your code goes here
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    if(a > b && a > c) printf("Largest: %d",a);
    else if(b > a && b > c) printf("Largest: %d",b);
    else printf("Largest: %d",c);
}

