#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, originalNum, remainder, result, n;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);

    for(num = start; num <= end; num++) {
        originalNum = num;
        result = 0;
        n = 0;

        // Count digits
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }

        originalNum = num;

        // Compute sum of powers
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if (result == num)
            printf("%d ", num);
    }

    return 0;
}
