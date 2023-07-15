#include <stdio.h>
#include <math.h>

int main() {
    int num_terms;

    printf("Enter the number of terms to display: ");
    scanf("%d", &num_terms);

    printf("The series is: ");

    long long int term = 2;
    for (int i = 0; i < num_terms; i++) {
        printf("%lld ", term);
        term = pow(term, 2);
    }

    printf("\n");

    return 0;
}
