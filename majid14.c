#include <stdio.h>

int main() {
    int n;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("The factorial of %d is: %d\n", n, factorial);
    }

    return 0;
}
