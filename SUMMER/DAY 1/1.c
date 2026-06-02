#include <stdio.h>

int main() {
    int N, sum;

    // Input from user
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Formula for sum of first N natural numbers: N*(N+1)/2
    sum = N * (N + 1) / 2;

    // Output result
    printf("The sum of the first %d natural numbers is: %d\n", N, sum);

    return 0;
}
