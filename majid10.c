#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d odd natural numbers are:\n", n);

    for (int i = 1, count = 0; count < n; i += 2) {
        printf("%d ", i);
        sum += i;
        count++;
    }

    printf("\n");

    printf("The sum of the first %d odd natural numbers is: %d\n", n, sum);

    return 0;
}
