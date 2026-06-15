#include <stdio.h>

void rotateLeft(int arr[], int n) {
    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}

int main() {
    int arr[100], n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    rotateLeft(arr, n);

    printf("Array after left rotation: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
