#include <stdio.h>
#include "train.h"

void add_train(Train *trains, int *count) {
    Train *t = &trains[*count];

    printf("Enter Train ID: ");
    scanf("%d", &t->train_id);

    printf("Enter Train Name: ");
    scanf(" %[^\n]", t->train_name);

    printf("Enter Source: ");
    scanf(" %[^\n]", t->source);

    printf("Enter Destination: ");
    scanf(" %[^\n]", t->destination);

    printf("Enter Total Seats: ");
    scanf("%d", &t->total_seats);

    t->available_seats = t->total_seats;

    (*count)++;
    printf("Train added successfully.\n");
}

void view_trains(Train *trains, int count) {
    if (count == 0) {
        printf("No trains available.\n");
        return;
    }

    printf("\n--- Train List ---\n");
    for (int i = 0; i < count; i++) {
        printf(
            "ID: %d | %s | %s → %s | Seats: %d/%d\n",
            trains[i].train_id,
            trains[i].train_name,
            trains[i].source,
            trains[i].destination,
            trains[i].available_seats,
            trains[i].total_seats
        );
    }
}

