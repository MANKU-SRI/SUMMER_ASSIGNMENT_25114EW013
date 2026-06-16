#include <stdio.h>

int main() {
    int n, i, sum = 0, total;
    printf("Enter size of array (n-1 elements): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 1 to n+1 with one missing):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = (n + 1) * (n + 2) / 2;  // Sum of first (n+1) natural numbers
    printf("Missing number = %d\n", total - sum);
    return 0;
}
