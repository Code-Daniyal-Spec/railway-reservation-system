#include "utils.h"

int generate_booking_id(void) {
    static int current_id = 1000;  // starts from 1000
    return current_id++;
}
