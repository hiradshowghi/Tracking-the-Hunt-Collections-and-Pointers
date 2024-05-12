#include "defs.h"

void loadBuildingData(BuildingType *building)
{
  GhostType*  ghost;
  RoomType*   room;
  int currRoomId = NEXT_ROOM_ID;
  int currGhostId = NEXT_GHOST_ID;

  initRoom(currRoomId++, "Master Bedroom", &room);
  addRoom(&building->rooms, room);
  initGhost(currGhostId++, OTHER, room, 82.51f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);

  initRoom(currRoomId++, "Bathroom", &room);
  addRoom(&building->rooms, room);
  initGhost(currGhostId++, WRAITH, room, 97.93f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, OTHER, room, 19.99f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, PHANTOM, room, 75.54f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, BULLIES, room, 27.75f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);

  initRoom(currRoomId++, "Guest Bedroom", &room);
  addRoom(&building->rooms, room);

  initRoom(currRoomId++, "Living Room", &room);
  addRoom(&building->rooms, room);
  initGhost(currGhostId++, POLTERGEIST, room, 87.67f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, PHANTOM, room, 19.97f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, OTHER, room, 43.62f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);

  initRoom(currRoomId++, "Kitchen", &room);
  addRoom(&building->rooms, room);
  initGhost(currGhostId++, BULLIES, room, 98.74f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, WRAITH, room, 61.53f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, OTHER, room, 82.75f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, POLTERGEIST, room, 56.69f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);

  initRoom(currRoomId++, "Dining Room", &room);
  addRoom(&building->rooms, room);

  initRoom(currRoomId++, "Basement", &room);
  addRoom(&building->rooms, room);
  initGhost(currGhostId++, BULLIES, room, 10.62f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, WRAITH, room, 72.21f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, PHANTOM, room, 18.71f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, OTHER, room, 81.77f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, POLTERGEIST, room, 52.78f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);

  initRoom(currRoomId++, "Attic", &room);
  addRoom(&building->rooms, room);
  initGhost(currGhostId++, BULLIES, room, 55.63f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, WRAITH, room, 36.52f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);

  initRoom(currRoomId++, "Garage", &room);
  addRoom(&building->rooms, room);
  initGhost(currGhostId++, WRAITH, room, 6.01f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, POLTERGEIST, room, 24.85f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);

  initRoom(currRoomId++, "Entryway", &room);
  addRoom(&building->rooms, room);
  initGhost(currGhostId++, OTHER, room, 2.35f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, BULLIES, room, 66.64f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, PHANTOM, room, 95.35f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, WRAITH, room, 88.78f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, POLTERGEIST, room, 88.90f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);

  initRoom(currRoomId++, "Hallway", &room);
  addRoom(&building->rooms, room);
  initGhost(currGhostId++, WRAITH, room, 97.99f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, PHANTOM, room, 65.04f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, OTHER, room, 50.94f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);

  initRoom(currRoomId++, "Staircase", &room);
  addRoom(&building->rooms, room);
  initGhost(currGhostId++, WRAITH, room, 47.03f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, PHANTOM, room, 20.51f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, BULLIES, room, 55.43f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);
  initGhost(currGhostId++, POLTERGEIST, room, 1.33f, &ghost);
  addGhost(&building->ghosts, ghost);
  addGhost(&(room->ghosts), ghost);

  initGhost(currGhostId++, WRAITH, NULL, 42.01f, &ghost);
  addGhost(&building->ghosts, ghost);
  initGhost(currGhostId++, PHANTOM, NULL, 11.21f, &ghost);
  addGhost(&building->ghosts, ghost);
}

void initBuilding(BuildingType *b) {
    // Initialize the two fields of the given building structure
    initGhostList(&(b->ghosts));
    initRoomArray(&(b->rooms));
}

void cleanupBuilding(BuildingType *b) {
    // Clean up all the dynamically allocated memory in the given building
    cleanupGhostList(&(b->ghosts));
    cleanupRoomArray(&(b->rooms));
}