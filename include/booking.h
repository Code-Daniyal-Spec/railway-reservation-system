#ifndef BOOKING_H
#define BOOKING_H

#include "train.h"

#define MAX_PASSENGER_NAME 50

typedef struct {
    int booking_id;
    int train_id;
    char passenger_name[MAX_PASSENGER_NAME];
    int seats_booked;
} Booking;

#include "ticket.h"

void book_ticket(
    Train *trains,
    int train_count,
    Ticket *tickets,
    int *ticket_count
);


#endif
