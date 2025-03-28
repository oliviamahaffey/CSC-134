// CSC-134
// M3LAB1
// oliviamahaffey
// 2/24/2025

// have to make program unique, going to do dungeon chests in video game

#include <iostream> 
using namespace std; 

int main () { 

// ask user question ... trying to use quotes ...
std::string message1 = " \"Greetings, young hero.\" ";
std::cout << message1 << std::endl; 
cout << "You have been journeying through a dungeon for hours, searching for loot and treasure." << endl; 
cout << "Finally you stumble upon a great owl, holding two chests..." << endl;
std::string message2 = " \"Please choose a chest. One contains great fortune; the other, certain peril.\" ";
std::cout << message2 << std::endl;
cout << endl; 
cout << endl; 

// give user choice 
int choice; 

cout << "Do you choose Chest 1 or Chest 2?" << endl; 
cout << "Type 1 or 2: ";
cin >> choice;

// using if, make a decision based on the user's choice

if (1 == choice) {
    cout << "Chest 1?  Let's see if you were lucky.." << endl; 
    cout << endl; 
    cout << "Eek!  A skeleton pops out, dragging you into battle!" << endl;
    cout << "You are a level six warrior facing a level 99 skeleton. How will you proceed?" << endl;
    string battle; 
    string W = "W";
    string A = "A";
    string S = "S";
    string D = "D";
    cout << "Press W to charge, A to block, S to retreat, or D to attack with magic." << endl; 
    cout << "Input choice: ";
    cin >> battle;

    if (W == battle) {
         cout << endl; 
        cout << "You charge into the skeleton, flailing around your sword." << endl; 
        cout << "The level 99 skeleton flicks your forehead with his finger." << endl; 
        cout << "K. O. " << endl; 
        cout << endl;
    }
    else if (A == battle) {
    cout << endl;
    cout << "You hold up your shield, heroicly defending yourself from the skeleton." << endl; 
    cout << "The level 99 skeleton raises his sword, tapping your shield and completely shattering it (and you)." << endl;
    cout << "K. O. " << endl;
    cout << endl; 
    }

    else if (S == battle) {
    cout << endl;
    cout << "Face-to-face with a level 99 skeleton, there is one clear choice in your mind: RUN!" << endl; 
    cout << "The skeleton sees you sprinting off and sighs, crawling back into his chest." << endl; 
    cout << "You survived! But, you're still stuck in this dungeon." << endl;
    cout << endl; 
}
else if (D == battle) {
    cout << "Bones must be weak to fire, right? You raise your hand, sputtering out flames in the monster's direction."<< endl;
    cout << "The level 99 skeleton opens his mouth, sucking up your flames and spewing them right back at you." << endl; 
    cout << "K. O. " << endl; 
    cout << endl;
    }
else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    cout << endl;
}
} 

else if (2 == choice) {
    cout << "Chest 2? Let's judge your intuition..." << endl;
    cout << endl;
    cout << "A glimmering, shining chest descends upon you, greedily, you open it." << endl;
    cout << "...It only contains one coin." << endl;
    cout << endl;
}
else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    cout << endl;
}



// finish up
cout << "Thanks for playing!" << endl; // this runs no matter what they choose

return 0; 

}
