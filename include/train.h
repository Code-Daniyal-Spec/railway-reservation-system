#ifndef TRAIN_H
#define TRAIN_H

#define MAX_NAME_LEN 50
#define MAX_CITY_LEN 50

typedef struct {
    int train_id;
    char train_name[MAX_NAME_LEN];
    char source[MAX_CITY_LEN];
    char destination[MAX_CITY_LEN];
    int total_seats;
    int available_seats;
} Train;

void add_train(Train *trains, int *count);
void view_trains(Train *trains, int count);

#endif


