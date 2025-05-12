// csc-134
// final proj. 
// oliviamahaffey
// 5/11/2025


// project explanation: i work at gamestop! so i frequently have to recommend games to customers based on their interests.
// this is basically a personality quiz, but it recommends one of my favorite games to you!

#include <iostream>

using namespace std;

// function 
void askQuestion(const string& question, const string options[], int& score);

int main() {
    int score = 0;
    int choice;

    cout << "Welcome to the Game Advisor Program!\n";
    cout << "Choose your favorite game out of four options and receive one of my favorite games as a recomemndation.\n";
    cout << "Answer the following questions by selecting the number corresponding to your choice.\n\n";

    // Question 1
    string q1 = "Pick a game:";
    string options1[] = {
        "1) Ratchet & Clank",
        "2) Elden Ring",
        "3) NieR: Automata",
        "4) Red Dead Redemption 2"
    };
    askQuestion(q1, options1, score);

    // Question 2
    string q2 = "Pick another game:";
    string options2[] = {
        "1) Super Mario Odyssey",
        "2) Bloodborne",
        "3) Persona 5",
        "4) Days Gone"
    };
    askQuestion(q2, options2, score);

    // Question 3
    string q3 = "Choose another game:";
    string options3[] = {
        "1) Astro Bot",
        "2) Darksouls III",
        "3) Xenoblade Chronicles 3",
        "4) Uncharted 4: A Thief's End"
    };
    askQuestion(q3, options3, score);

    // Question 4
    string q4 = "Pick one last game:";
    string options4[] = {
        "1) Crash Bandicoot",
        "2) Black Myth Wukong",
        "3) Final Fantasy VII Remake",
        "4) The Walking Dead: A New Frontier"
    };
    askQuestion(q4, options4, score);

    // Determine personality type based on score
    cout << "\nYour total score is: " << score << "\n";
    if (score <= 6) {
        cout << "You should play: Ape Escape 2\n\n";
        cout << "While Ape Escape is a certified classic, its sequel never got it's (well deserved) flowers!\n"; 
        cout << "Ape Escape 2 is a wacky and wild platformer that embodies the essence of gaming: fun.\n";
    } else if (score <= 10) {
        cout << "You should play: Another Crab's Treasure\n\n";
        cout << "If you enjoy pain and suffering with a fun, colorful twist, try Another Crab's Treasure!\n"; 
        cout << "Another Crab's Treasure is a classic souls game. Except, you're a crab. And it comes with some fun gameplay twists and turns!\n";
    } else if (score <= 14) {
        cout << "You should play: Final Fantasy XVI\n\n";
        cout << "FF: XVI is the most underrated modern JRPG. Play it now to be automatically cooler than your friends!\n"; 
        cout << "The graphics are amazing, story is captivating, combat is smooth and rewarding, and you get to play as a god! What more do you need?\n";
    } else {
        cout << "You should play: The Last of Us\n\n";
        cout << "If you haven't played The Last of Us in 2025... why not?\n"; 
        cout << "But seriously! This game is cinema! Its gritty, gross, and incredibly real. Excellent for a survivalist or zombie enthusiast!\n";
    }

    return 0;
}

// Function to ask a question and update the score
void askQuestion(const string& question, const string options[], int& score) {
    int choice;

    cout << "\n" << question << "\n";
    for (int i = 0; i < 4; i++) {
        cout << "   " << options[i] << "\n";
    }
    cout << "Your choice: ";
    cin >> choice;

    // Validate input
    while (choice < 1 || choice > 4) {
        cout << "Invalid choice. Please enter a number between 1 and 4: ";
        cin >> choice;
    }

    score += choice;
}