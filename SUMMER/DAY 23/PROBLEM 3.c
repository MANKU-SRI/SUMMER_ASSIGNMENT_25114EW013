#include <stdio.h>
#include <string.h>

#define SIZE 256

int main() {
    char str1[100], str2[100];
    int freq1[SIZE] = {0}, freq2[SIZE] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    for (int i = 0; str1[i]; i++) {
        freq1[(unsigned char)str1[i]]++;
        freq2[(unsigned char)str2[i]]++;
    }

    for (int i = 0; i < SIZE; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagrams\n");
            return 0;
        }
    }
    printf("Strings are Anagrams\n");
    return 0;
}
