#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("%d is a Palindrome\n", num);
    else
        printf("%d is not a Palindrome\n", num);
    return 0;
}
