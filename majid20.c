#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of times to repeat the series: ");
    scanf("%d", &n);

    printf("The series is: ");

    for (int i = 1; i <= n; i++) {
        int num = (i % 5 == 0) ? 5 : (i % 5);
        printf("%d ", num);
    }

    printf("\n");

    return 0;
}
