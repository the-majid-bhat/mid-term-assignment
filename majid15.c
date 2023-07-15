#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("The sum of the series 1, 3, 5, 7, ..., %d is: %d\n", n, sum);

    return 0;
}
