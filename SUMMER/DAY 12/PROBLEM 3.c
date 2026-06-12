#include <stdio.h>

void fibonacci(int terms) {
    int a = 0, b = 1, next;
    for (int i = 0; i < terms; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    fibonacci(n);
    return 0;
}
