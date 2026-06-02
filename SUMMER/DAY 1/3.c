#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1; // use long long for large results

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to calculate factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
