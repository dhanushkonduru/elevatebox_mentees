#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x;
        scanf("%d", &x);

        // Your code for each test case goes here
        if(x >= 2000) printf("Yes\n");
        else printf("No\n");
    }

}
