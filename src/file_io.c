#include <stdio.h>
#include "file_io.h"

int load_trains(Train *trains, int max_count) {
    FILE *fp = fopen("data/trains.dat", "rb");
    if (!fp) return 0;

    int count;
    fread(&count, sizeof(int), 1, fp);

    if (count > max_count) {
        count = max_count;
    }

    fread(trains, sizeof(Train), count, fp);
    fclose(fp);
    return count;
}

void save_trains(Train *trains, int count) {
    FILE *fp = fopen("data/trains.dat", "wb");
    if (!fp) {
        printf("Error saving trains.\n");
        return;
    }

    fwrite(&count, sizeof(int), 1, fp);
    fwrite(trains, sizeof(Train), count, fp);
    fclose(fp);
}
