#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
oliviamahaffey
4/23/2025
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void explore_kitchen_final(); 
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() {
    cout << "You sneak around back and find an open window." << endl;
    cout << "Do you:" << endl;
    cout << "1. Climb in" << endl;
    cout << "2. Decide it's too risky and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
      cout << "You climb in and find yourself in a dark, dusty kitchen..." << endl;
      explore_kitchen_final(); 
    } 
    else if (2 == choice) {
      choice_go_home();
    }
  }

  void choice_go_home() {
    cout << "You decide this place is just too creepy and head home." << endl;
    cout << "Maybe another adventure awaits another day." << endl;
  }

  void explore_kitchen_final() {
    cout << "The kitchen is eerily quiet, save for the slow creak of a swaying light fixture." << endl;
    cout << "The walls seem to close in around you. You must act fast..." << endl;
    cout << "You see:" << endl;
    cout << "1. A flickering candle on the dining table" << endl;
    cout << "2. A rotten trapdoor in the corner" << endl;
    cout << "3. A rusted knife on the counter" << endl;
    cout << "4. A dusty old book with an ominous symbol on the cover" << endl;
    
    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "The candle’s flame flares wildly, and suddenly, the room is engulfed in darkness." << endl;
        cout << "You feel hands grasping at you from the void. The house has claimed you." << endl;
        cout << "GAME OVER." << endl;
    } else if (choice == 2) {
        cout << "You pry open the trapdoor. A foul stench hits you as shadows swarm up from below." << endl;
        cout << "Before you can react, something pulls you under. You are never seen again." << endl;
        cout << "GAME OVER." << endl;
    } else if (choice == 3) {
        cout << "You grab the knife, but as soon as you touch it, a piercing scream fills your ears." << endl;
        cout << "Your vision blurs, and your body collapses to the floor. The house has won." << endl;
        cout << "GAME OVER." << endl;
    } else if (choice == 4) {
        cout << "You hesitantly open the book. The pages glow faintly, revealing ancient words." << endl;
        cout << "You read the incantation aloud. The house trembles violently, and suddenly..." << endl;
        cout << "A doorway appears in front of you, leading to safety!" << endl;
        cout << "You run through it as the haunted house collapses behind you. You've survived!" << endl;
        cout << "CONGRATULATIONS, YOU WIN!" << endl;
    } else {
        cout << "The house senses your hesitation. The walls begin closing in..." << endl;
        cout << "Your fate is sealed." << endl;
        cout << "GAME OVER." << endl;
    }
}