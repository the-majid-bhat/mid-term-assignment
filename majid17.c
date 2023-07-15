#include <stdio.h>

int main() {
    int n;
    int term = 2;

    printf("Enter the number of terms to display: ");
    scanf("%d", &n);

    printf("The series is: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", term);
        term *= 2;
    }

    printf("\n");

    return 0;
}
