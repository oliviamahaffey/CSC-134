// csc-134
// m6lab2 
// 4/23/2025
// oliviamahaffey



#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    MAIN_DECK = 0,
    CAPTAINS = 1,
    BOW = 2,
    PLANK = 3,
    BASEMENT = 4,
    NUM_ROOMS = 5
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Main Deck",
        "Captain's Quarters",
        "Bow",
        "Plank",
        "Basement"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "The main deck of a grandiose pirate ship. Caution: wet floors.",
        "A large room stacked with treasure! At the center, the ship's captain sleeps on a couch.",
        "The front of the ship, a wooden mermaid adorns the front. Smells like saltwater.",
        "A long, narrow strip of wood. Wouldn't recommend walking down it...",
        "A dark, damp basement filled with... jail cells? Is this where they keep their prisoners?"
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Main Deck connections
    connections[MAIN_DECK][NORTH] = CAPTAINS;    // Main Deck -> North -> CAPTAINS
    connections[MAIN_DECK][EAST] = BOW;     // Main Deck -> East -> BOW
    connections[MAIN_DECK][SOUTH] = -1;         // No connection south
    connections[MAIN_DECK][WEST] = PLANK;      // Main Deck -> West -> Plank
    
    // CAPTAINS connections
    connections[CAPTAINS][NORTH] = -1;               // No connection north
    connections[CAPTAINS][EAST] = -1;                // No connection east
    connections[CAPTAINS][SOUTH] = MAIN_DECK;        // CAPTAINS -> South -> Main Deck
    connections[CAPTAINS][WEST] = -1;                // No connection west
    
    // BOW connections
    connections[BOW][NORTH] = -1;               // No connection north
    connections[BOW][EAST] = -1;                // No connection east
    connections[BOW][SOUTH] = BASEMENT;         // BOW -> South -> Basement
    connections[BOW][WEST] = MAIN_DECK;        // BOW -> West -> Main Deck
    
    // PLANK connections
    connections[PLANK][NORTH] = -1;                // No connection north
    connections[PLANK][EAST] = MAIN_DECK;          // Plank -> East -> Main Deck
    connections[PLANK][SOUTH] = -1;                // No connection south
    connections[PLANK][WEST] = -1;                 // No connection west
    
    // Basement connections
    connections[BASEMENT][NORTH] = BOW;             // Basement -> North -> BOW
    connections[BASEMENT][EAST] = -1;               // No connection east
    connections[BASEMENT][SOUTH] = -1;              // No connection south
    connections[BASEMENT][WEST] = -1;               // No connection west
    
    // Game state
    int currentRoom = MAIN_DECK; // Start in the Main Deck
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}