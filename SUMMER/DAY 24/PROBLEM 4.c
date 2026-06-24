#include <stdio.h>
#include <string.h>

#define SIZE 256

int main() {
    char str[100];
    int seen[SIZE] = {0};
    printf("Enter a string: ");
    scanf("%s", str);

    printf("String after removing duplicates: ");
    for (int i = 0; str[i]; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
