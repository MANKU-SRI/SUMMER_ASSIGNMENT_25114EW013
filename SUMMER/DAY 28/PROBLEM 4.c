#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0, choice, i;
    char search[50];
    
    do {
        printf("\n--- Contact Management ---\n");
        printf("1. Add Contact\n2. Display Contacts\n3. Search Contact\n4. Exit\n");
        scanf("%d", &choice);
        
        if(choice == 1) {
            printf("Enter Name: ");
            scanf(" %[^\n]", contacts[count].name);
            printf("Enter Phone: ");
            scanf(" %[^\n]", contacts[count].phone);
            count++;
        } else if(choice == 2) {
            for(i=0; i<count; i++)
                printf("%s | %s\n", contacts[i].name, contacts[i].phone);
        } else if(choice == 3) {
            printf("Enter name to search: ");
            scanf(" %[^\n]", search);
            for(i=0; i<count; i++) {
                if(strcmp(contacts[i].name, search) == 0) {
                    printf("Found: %s | %s\n", contacts[i].name, contacts[i].phone);
                    break;
                }
            }
            if(i == count) printf("Contact not found!\n");
        }
    } while(choice != 4);
    
    return 0;
}
