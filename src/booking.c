#include <stdio.h>
#include "booking.h"
#include "train.h"
#include "ticket.h"
#include "utils.h"

void book_ticket(
    Train *trains,
    int train_count,
    Ticket *tickets,
    int *ticket_count
) {
    int train_id;
    int seats;
    char passenger_name[MAX_PASSENGER_NAME];

    printf("Enter Train ID to book: ");
    scanf("%d", &train_id);

    for (int i = 0; i < train_count; i++) {

        if (trains[i].train_id == train_id) {

            if (trains[i].available_seats <= 0) {
                printf("No seats available on this train.\n");
                return;
            }

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", passenger_name);

            printf("Enter number of seats to book: ");
            scanf("%d", &seats);

            if (seats <= 0) {
                printf("Invalid seat count.\n");
                return;
            }

            if (seats > trains[i].available_seats) {
                printf("Not enough seats available.\n");
                printf("Available seats: %d\n", trains[i].available_seats);
                return;
            }

            /* Deduct seats */
            trains[i].available_seats -= seats;

            /* Create ticket */
            Ticket t;
            t.ticket_id = generate_booking_id();
            t.train_id = train_id;
            t.seats_booked = seats;
            snprintf(t.passenger_name, MAX_PASSENGER_NAME, "%s", passenger_name);

            tickets[*ticket_count] = t;
            (*ticket_count)++;

            printf("\nBooking successful!\n");
            printf("Ticket ID      : %d\n", t.ticket_id);
            printf("Passenger Name: %s\n", t.passenger_name);
            printf("Seats Booked  : %d\n", t.seats_booked);
            printf("Seats Left    : %d\n", trains[i].available_seats);

            return;
        }
    }

    printf("Train ID not found.\n");
}
