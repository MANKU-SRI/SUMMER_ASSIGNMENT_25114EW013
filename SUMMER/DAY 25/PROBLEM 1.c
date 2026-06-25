#include <stdio.h>

void mergeArrays(int a[], int n1, int b[], int n2, int c[]) {
    int i=0, j=0, k=0;
    while(i<n1 && j<n2) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i<n1) c[k++] = a[i++];
    while(j<n2) c[k++] = b[j++];
}

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};
    int n1 = 4, n2 = 4, c[8];

    mergeArrays(a, n1, b, n2, c);

    printf("Merged array: ");
    for(int i=0; i<n1+n2; i++)
        printf("%d ", c[i]);
    return 0;
}
