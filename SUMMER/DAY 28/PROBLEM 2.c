#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    int choice;
    float amount;
    
    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", acc.name);
    acc.balance = 0;
    
    do {
        printf("\n--- Bank System ---\n");
        printf("1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\n");
        scanf("%d", &choice);
        
        if(choice == 1) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            acc.balance += amount;
        } else if(choice == 2) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            if(amount <= acc.balance) acc.balance -= amount;
            else printf("Insufficient balance!\n");
        } else if(choice == 3) {
            printf("Balance: %.2f\n", acc.balance);
        }
    } while(choice != 4);
    
    return 0;
}
