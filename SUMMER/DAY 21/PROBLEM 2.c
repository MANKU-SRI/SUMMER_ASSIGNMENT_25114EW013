#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    j = len - 1;

    for (i = 0; i < len; i++) {
        rev[i] = str[j];
        j--;
    }
    rev[len] = '\0';

    printf("Reversed string = %s\n", rev);
    return 0;
}
