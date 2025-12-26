#ifndef FILE_IO_H
#define FILE_IO_H

#include "train.h"

int load_trains(Train *trains, int max_count);
void save_trains(Train *trains, int count);

#endif

