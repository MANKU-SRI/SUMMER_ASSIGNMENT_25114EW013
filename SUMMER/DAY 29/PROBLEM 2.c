#include <stdio.h>

int main() {
    int arr[100], n, choice, i, sum=0, even=0, odd=0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++) scanf("%d", &arr[i]);

    do {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Display\n2. Sum & Average\n3. Largest & Smallest\n4. Count Even & Odd\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Array elements: ");
                for(i=0; i<n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 2:
                sum=0;
                for(i=0; i<n; i++) sum += arr[i];
                printf("Sum = %d, Average = %.2f\n", sum, (float)sum/n);
                break;
            case 3: {
                int max=arr[0], min=arr[0];
                for(i=1; i<n; i++) {
                    if(arr[i]>max) max=arr[i];
                    if(arr[i]<min) min=arr[i];
                }
                printf("Largest = %d, Smallest = %d\n", max, min);
                break;
            }
            case 4:
                even=odd=0;
                for(i=0; i<n; i++) {
                    if(arr[i]%2==0) even++;
                    else odd++;
                }
                printf("Even count = %d, Odd count = %d\n", even, odd);
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 5);

    return 0;
}
