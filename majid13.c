#include <stdio.h>

int main() {
    int n;
    int product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("The product of the series from 1 to %d is: %d\n", n, product);

    return 0;
}
