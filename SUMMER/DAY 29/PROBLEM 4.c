#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[100];
    int count=0, choice, i, id;

    do {
        printf("\n--- Inventory Management Menu ---\n");
        printf("1. Add Item\n2. Display Items\n3. Search Item\n4. Update Quantity\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID, Name, Quantity, Price: ");
                scanf("%d %s %d %f", &inventory[count].id, inventory[count].name, &inventory[count].quantity, &inventory[count].price);
                count++;
                break;
            case 2:
                printf("\nInventory List:\n");
                for(i=0; i<count; i++)
                    printf("ID:%d Name:%s Qty:%d Price:%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                break;
            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for(i=0; i<count; i++) {
                    if(inventory[i].id == id) {
                        printf("Found: ID:%d Name:%s Qty:%d Price:%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                        break;
                    }
                }
                if(i==count) printf("Item not found!\n");
                break;
            case 4:
                printf("Enter ID to update quantity: ");
                scanf("%d", &id);
                for(i=0; i<count; i++) {
                    if(inventory[i].id == id) {
                        printf("Enter new quantity: ");
                        scanf("%d", &inventory[i].quantity);
                        printf("Quantity updated!\n");
                        break;
                    }
                }
                if(i==count) printf("Item not found!\n");
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 5);

    return 0;
}
