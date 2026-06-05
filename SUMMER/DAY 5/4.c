#include <stdio.h>

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    long long largestPrime = -1;

    // Remove factors of 2
    while (n % 2 == 0) {
        largestPrime = 2;
        n /= 2;
    }

    // Check odd factors
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestPrime = i;
            n /= i;
        }
    }

    // If n is prime and > 2
    if (n > 2)
        largestPrime = n;

    printf("Largest Prime Factor is: %lld\n", largestPrime);

    return 0;
}
