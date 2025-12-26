#ifndef TICKET_H
#define TICKET_H

#define MAX_PASSENGER_NAME 50
#define MAX_TICKETS 500

typedef struct {
    int ticket_id;
    char passenger_name[MAX_PASSENGER_NAME];
    int train_id;
    int seats_booked;
} Ticket;

/* Ticket functions */
int load_tickets(Ticket *tickets);
void save_tickets(Ticket *tickets, int count);
void add_ticket(Ticket *tickets, int *count, Ticket new_ticket);
void view_tickets(Ticket *tickets, int count);

#endif
