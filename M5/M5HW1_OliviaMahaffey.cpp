#include <iostream>
using namespace std;

// Functions
void displayMenu() {
    int choice;

    while (true) {
        cout << "\nMenu Options:" << endl;
        cout << "1. Question 1" << endl;
        cout << "2. Question 2" << endl;
        cout << "3. Question 3" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            cout << "You selected Question 1!" << endl;
        } else if (choice == 2) {
            cout << "You selected Question 2!" << endl;
        } else if (choice == 3) {
            cout << "You selected Question 3!" << endl;
        } else if (choice == 4) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again!" << endl;
        }
    }
}

// Main function
int main() {
    displayMenu();
    return 0;
}