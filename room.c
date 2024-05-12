#include "defs.h"

void initRoom(int id, char *name, RoomType **room) {
    // Dynamically allocate memory for a RoomType structure
    *room = (RoomType *)malloc(sizeof(RoomType));
    if (*room == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Initialize the new Room's fields to the given parameters
    (*room)->id = id;
    strncpy((*room)->name, name, MAX_STR);
    (*room)->name[MAX_STR - 1] = '\0'; // Ensure null-terminated string

    // Initialize the new GhostList as empty
    initGhostList(&(*room)->ghosts);
}

void initRoomArray(RoomArrayType *arr) {
    // Set the initial size of a RoomArray to zero
    arr->size = 0;
}
void addRoom(RoomArrayType *arr, RoomType *r) {
    // Check if the array is full and resize if needed
    if (arr->size >= MAX_ARR) {
        fprintf(stderr, "Cannot add more rooms, maximum capacity reached\n");
        exit(EXIT_FAILURE);
    }

    // Add the room to the back of the array
    arr->rooms[arr->size++] = r;
}

void cleanupRoomArray(RoomArrayType *arr) {
    // Deallocate the dynamically allocated memory in the given room collection
    for (int i = 0; i < arr->size; ++i) {
        cleanupGhostList(&(arr->rooms[i]->ghosts)); // Cleanup the ghost list for each room
        free(arr->rooms[i]); // Deallocate memory for each room
    }

    // Reset the size of the room array to zero
    arr->size = 0;
}

void printRooms(const RoomArrayType *arr) {
    // Traverse the given room array and print all fields of each room structure
    for (int i = 0; i < arr->size; ++i) {
        printf("Room ID: %d: %s\n", arr->rooms[i]->id, arr->rooms[i]->name);
        printf("---------------------\n");
        // Print the ghost list for each room
        printf("Ghost List:\n");
        printf("-----------------\n");
        printGhostList(&(arr->rooms[i]->ghosts));
        printf("\n"); // Separate each room for clarity
    }
}