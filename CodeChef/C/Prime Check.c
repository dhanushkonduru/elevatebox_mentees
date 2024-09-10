#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0, i = 1;

    if (n > 0) {
        while (i <= n) {
            if (n % i == 0) {
                count = count + 1;
            }
            i++;
        }
    }

    if (count == 2) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
