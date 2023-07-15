#include <stdio.h>

int main() {
    int n;
    int term1 = 1, term2 = 1;

    printf("Enter the number of terms to display: ");
    scanf("%d", &n);

    printf("The Fibonacci series is: ");

    printf("%d %d ", term1, term2);

    for (int i = 3; i <= n; i++) {
        int nextTerm = term1 + term2;
        printf("%d ", nextTerm);
        term1 = term2;
        term2 = nextTerm;
    }

    printf("\n");

    return 0;
}
