#include <stdio.h>

int main() {
    int seats = 50, booked = 0, choice, tickets;
    
    do {
        printf("\n--- Ticket Booking ---\n");
        printf("1. Book Tickets\n2. Available Seats\n3. Exit\n");
        scanf("%d", &choice);
        
        if(choice == 1) {
            printf("Enter number of tickets: ");
            scanf("%d", &tickets);
            if(tickets <= seats - booked) {
                booked += tickets;
                printf("Booking successful! Tickets booked: %d\n", tickets);
            } else {
                printf("Not enough seats available!\n");
            }
        } else if(choice == 2) {
            printf("Available seats: %d\n", seats - booked);
        }
    } while(choice != 3);
    
    return 0;
}
