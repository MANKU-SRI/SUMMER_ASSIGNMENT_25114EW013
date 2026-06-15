#include <stdio.h>

void rotateRight(int arr[], int n) {
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    int arr[100], n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    rotateRight(arr, n);

    printf("Array after right rotation: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
