#include "defs.h"

int main() {
    BuildingType building;

    // Initialize the local building structure
    initBuilding(&building);

    // Load the building data into the local building structure
    loadBuildingData(&building);

    int choice;

    do {
        // Repeatedly print out the main menu
        printMenu(&choice);

        switch (choice) {
            case 1:
                // Print rooms
                printRooms(&(building.rooms));
                break;
            case 2:
                // Print ghosts (ascending order by ID)
                printGhostList(&(building.ghosts));
                break;
            case 3:
                // Print ghosts by likelihood (descending order by likelihood)
                printByLikelihood(&(building.ghosts), 0);
                break;
            case 4:
                // Print most and least likely ghosts
                printByLikelihood(&(building.ghosts), 1);
                break;
            case 0:
                // Exit
                break;
            default:
                printf("Invalid choice. Please enter a valid menu option.\n");
        }
    } while (choice != 0);

    // Clean up the dynamically allocated memory in the local building structure
    cleanupBuilding(&building);

    return 0;
}

void printMenu(int *choice)
{
  printf("\nMAIN MENU\n");
  printf("  (1) Print rooms\n");
  printf("  (2) Print ghosts\n");
  printf("  (3) Print ghosts by likelihood\n");
  printf("  (4) Print most/least likely ghosts\n");
  printf("  (0) Exit\n\n");

  printf("Please enter your selection: ");
  scanf("%2d", choice);
  while (getchar() != '\n');
}

