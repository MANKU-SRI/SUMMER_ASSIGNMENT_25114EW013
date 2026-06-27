#include <stdio.h>

int main() {
    int balance = 10000, choice, amount;

    do {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Current Balance: %d\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposit successful. New Balance: %d\n", balance);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful. New Balance: %d\n", balance);
                } else {
                    printf("Insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using ATM.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 4);

    return 0;
}
