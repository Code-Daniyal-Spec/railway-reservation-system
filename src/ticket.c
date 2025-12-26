#include <stdio.h>
#include "ticket.h"

int load_tickets(Ticket *tickets) {
    FILE *fp = fopen("data/tickets.dat", "rb");
    if (!fp) return 0;

    int count = 0;
    while (fread(&tickets[count], sizeof(Ticket), 1, fp)) {
        count++;
    }

    fclose(fp);
    return count;
}

void save_tickets(Ticket *tickets, int count) {
    FILE *fp = fopen("data/tickets.dat", "wb");
    if (!fp) return;

    fwrite(tickets, sizeof(Ticket), count, fp);
    fclose(fp);
}

void add_ticket(Ticket *tickets, int *count, Ticket new_ticket) {
    tickets[*count] = new_ticket;
    (*count)++;
}

void view_tickets(Ticket *tickets, int count) {
    if (count == 0) {
        printf("No tickets booked yet.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf(
            "\nTicket ID: %d\nPassenger: %s\nTrain ID: %d\nSeats: %d\n",
            tickets[i].ticket_id,
            tickets[i].passenger_name,
            tickets[i].train_id,
            tickets[i].seats_booked
        );
    }
}
