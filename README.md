# Railway Reservation System (C)

A modular, file-based Railway Reservation System implemented in C.  
This project simulates core railway booking operations such as managing trains, booking tickets, seat availability tracking, and persistent storage using binary files.

---

## Features

- Add and view trains
- Seat availability management
- Book tickets with passenger details
- Auto-generated unique ticket IDs
- Persistent storage using binary files
- View all booked tickets
- Clean modular architecture using header files

---

## Project Structure

railway-reservation-system/
│
├── data/
│ ├── trains.dat # Stored train data (auto-generated)
│ └── tickets.dat # Stored ticket data (auto-generated)
│
├── include/
│ ├── train.h
│ ├── booking.h
│ ├── ticket.h
│ ├── file_io.h
│ └── utils.h
│
├── src/
│ ├── main.c
│ ├── train.c
│ ├── booking.c
│ ├── ticket.c
│ ├── file_io.c
│ └── utils.c
│
├── .gitignore
├── README.md
└── railway # Compiled executable

---

## How to Compile

From the project root directory:

```bash
gcc src/*.c -Iinclude -o railway
./railway
```
## Sample Workflow

1. Add trains with total seats  
2. View available trains  
3. Book tickets for a train  
4. Seats are automatically deducted  
5. Tickets are saved and retrievable even after restart  

---

## Data Persistence

- `trains.dat` stores all train records  
- `tickets.dat` stores all booked tickets  
- Data remains intact across program runs  

---

## Possible Enhancements

- Seat-wise allocation  
- Train search by source & destination  
- Cancellation and refund logic  
- Date-based booking  
- Admin vs user roles 

---

## Author

**Daniyal Khan**  
Undergraduate student at **IIT Kharagpur**  
Interests: Systems Programming, Software Engineering, and Data Analysis

---

## Final Note

This project prioritizes **clarity, correctness, and robustness** over unnecessary complexity.
Every feature implemented works end-to-end with persistent storage.

Feel free to explore, modify, or extend
