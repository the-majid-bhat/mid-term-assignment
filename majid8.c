#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The cubes of natural numbers up to %d are:\n", n);

    for (int i = 1; i <= n; i++) {
        int cube = i * i * i;
        printf("%d ", cube);
    }

    printf("\n");

    return 0;
}
