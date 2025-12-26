#include <stdio.h>
#include "train.h"
#include "booking.h"
#include "file_io.h"
#include "ticket.h"

#define MAX_TRAINS 100

int main() {
    Train trains[MAX_TRAINS];
    int train_count = load_trains(trains, MAX_TRAINS);

    Ticket tickets[MAX_TICKETS];
    int ticket_count;
    ticket_count = load_tickets(tickets);


    int choice;

    do {
        printf("\n=== Railway Reservation System ===\n");
        printf("1. Add Train\n");
        printf("2. View Trains\n");
        printf("3. Book Ticket\n");
        printf("4. View Tickets\n");
        printf("5. Save & Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_train(trains, &train_count);
                break;
            case 2:
                view_trains(trains, train_count);
                break;
            case 3:
                book_ticket(trains, train_count, tickets, &ticket_count);
                break;
            case 4:
                view_tickets(tickets, ticket_count);
                break;
            case 5:
                save_trains(trains, train_count);
                save_tickets(tickets, ticket_count);
                printf("Data saved. Exiting...\n");
                return 0;


            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
