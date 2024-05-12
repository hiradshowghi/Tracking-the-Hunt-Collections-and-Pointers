#include "defs.h"

// Function to initialize a GhostList
void initGhostList(GhostListType *list) {
    list->head = list->tail = NULL;
}

// Function to initialize a Ghost
void initGhost(int id, GhostEnumType gt, RoomType *r, float like, GhostType **ghost) {
    *ghost = (GhostType *)malloc(sizeof(GhostType));
    (*ghost)->id = id;
    (*ghost)->ghostType = gt;
    (*ghost)->room = r;
    (*ghost)->likelihood = like;
}

// Function to add a Ghost to the GhostList
void addGhost(GhostListType *list, GhostType *ghost) {
    NodeType *node = (NodeType *)malloc(sizeof(NodeType));
    node->ghost = ghost;
    node->next = NULL;

    if (list->tail == NULL) {
        // If the list is empty, set both head and tail to the new node
        list->head = list->tail = node;
    } else {
        // Otherwise, add the new node to the end and update the tail
        list->tail->next = node;
        list->tail = node;
    }
}

// Function to cleanup data of a GhostList
void cleanupGhostData(GhostListType *list) {
    NodeType *current = list->head;
    while (current != NULL) {
        free(current->ghost);
        current = current->next;
    }
}

// Function to cleanup nodes of a GhostList
void cleanupGhostList(GhostListType *list) {
    NodeType *current = list->head;
    while (current != NULL) {
        NodeType *temp = current;
        current = current->next;
        free(temp);
    }
    list->head = list->tail = NULL;
}

// Function to print information about a Ghost
void printGhost(const GhostType *ghost) {
    printf("Ghost ID: %d\n", ghost->id);
    printf("Ghost Type: ");
    switch (ghost->ghostType) {
        case POLTERGEIST:
            printf("Poltergeist\n");
            break;
        case WRAITH:
            printf("Wraith\n");
            break;
        case PHANTOM:
            printf("Phantom\n");
            break;
        case BULLIES:
            printf("Bullies\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    printf("Likelihood: %.2f\n", ghost->likelihood);

    printf("Room: ");
    if (ghost->room != NULL) {
        printf("%s\n", ghost->room->name);
    } else {
        printf("Unknown\n");
    }

    printf("\n");
}

// Function to print all ghosts in a GhostList
void printGhostList(const GhostListType *list) {
    NodeType *current = list->head;
    while (current != NULL) {
        printGhost(current->ghost);
        printf("---------------------\n");
        current = current->next;
    }
}

void addGhostByLikelihood(GhostListType *list, GhostType *ghost) {
    // Create a new node for the ghost
    NodeType *newNode = (NodeType *)malloc(sizeof(NodeType));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->ghost = ghost;
    newNode->next = NULL;

    // Traverse the list to find the correct insertion point
    NodeType *current = list->head;
    NodeType *prev = NULL;

    while (current != NULL && current->ghost->likelihood > ghost->likelihood) {
        prev = current;
        current = current->next;
    }

    // Insert the new node
    if (prev == NULL) {
        // Insert at the beginning of the list
        newNode->next = list->head;
        list->head = newNode;
    } else {
        // Insert in the middle or at the end of the list
        prev->next = newNode;
        newNode->next = current;
    }

    // Update the tail if necessary
    if (current == NULL) {
        list->tail = newNode;
    }
}

void printByLikelihood(const GhostListType *origList, int endsOnly) {
    // Create a temporary list and initialize it as empty
    GhostListType tempList;
    initGhostList(&tempList);

    // Traverse the original list and insert each element to the temporary list in descending order by likelihood
    NodeType *current = origList->head;
    while (current != NULL) {
        addGhostByLikelihood(&tempList, current->ghost);
        current = current->next;
    }

    // If endsOnly parameter is true, print the most likely and least likely ghosts and identify them
    if (endsOnly) {
        printf("Most Likely Ghost:\n");
        printf("---------------------\n");
        printGhost(tempList.head->ghost);
        printf("\nLeast Likely Ghost:\n");
        printf("---------------------\n");
        printGhost(tempList.tail->ghost);
    } else {
        // If endsOnly parameter is false, print each element in the temporary list
        current = tempList.head;
        while (current != NULL) {
            printGhost(current->ghost);
            current = current->next;
        }
    }

    // Clean up the memory for the temporary list
    cleanupGhostList(&tempList);
}
