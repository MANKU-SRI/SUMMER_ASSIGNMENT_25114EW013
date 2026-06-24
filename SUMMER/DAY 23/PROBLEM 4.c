#include <stdio.h>
#include <string.h>

#define SIZE 256

int main() {
    char str[100];
    int freq[SIZE] = {0}, max = -1;
    char result;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i]; i++)
        freq[(unsigned char)str[i]]++;

    for (int i = 0; i < SIZE; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = (char)i;
        }
    }

    printf("Maximum occurring character: %c (appears %d times)\n", result, max);
    return 0;
}
