// CSC-134
// M3HW1 - ??
// oliviamahaffey
// 2/26/2025

#include <iostream>
#include <iomanip>
using namespace std; 

void question1();
void question2();
void question3();


int main() {
    cout << "M3HW1 Menu" << endl;
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl;
    cout << "3. Question 3" << endl; 
    cout << "0. Exit" << endl;
    int choice;
    cin >> choice;
    if (1==choice) {
        question1();
    }
    else if (2==choice) {
        question2();
    }
    else if (3==choice) {
        question3();
    }
    else if (0==choice) {
        cout << "Bye!" << endl;
        return 0;
    }
    else {
        cout << "Not a valid choice." << endl;
    }
    return 0; 
}


   // question 1
   void question1() {
    cout << "Question #1 -- Chatbot" << endl;  
    cout << endl;
    // code
    cout << "Welcome to the Chatbot!" << endl; 
    cout << ". . . " << endl; 
    cout << "Do you like sushi 🍣? Please type 'yes' or 'no'." << endl;
    string choice;
    string yes = "yes";
    string no = "no";
    cin >> choice; 
    // if else
    if (choice == yes){
     cout << "Cool! I would say 'me too', but I am a robot." << endl;
    }
    else if (choice == no){
     cout << "The person programming me disagrees with you. Sorry!" << endl;
    }
    else {
     cout << "I'm sorry, I didn't quite get that..." << endl; 
    }
   }

   // question 2 
   void question2() {
    cout << "Question #2 -- Calculator" << endl; 
    cout << endl;
    // code
    cout << "Receipt Calculator Function loading..." << endl;
    cout << "Please enter the MEAL PRICE: ";
    double meal_cost; 
    cin >> meal_cost; 
    cout << "Please press [1] if your order is DINE IN or [2] if your order is TO-GO: ";
    int choice;
    cin >> choice; 
    // ifelse
    if (1==choice){
        // math
        double DI_total;
        double tax_percent = 0.08; 
        double tax_cost = tax_percent * meal_cost; 
        double tip = 0.15; 
        double tip_cost = tip * meal_cost; 
        DI_total = tax_cost + tip_cost + meal_cost; 
        // dine in receipt 
    cout << setprecision(2) << fixed; 
        cout << "YOUR RECEIPT" << endl; 
        cout << "------------" << endl;
        cout << "SUBTOTAL: " << meal_cost << endl; 
        cout << "TAX:      " << tax_cost << endl; 
        cout << "TIP:      " << tip_cost << endl; 
        cout << "TOTAL:    " << DI_total << endl; 
        cout << "------------" << endl; 
        cout << "THANK YOU! :)" << endl; 
        cout << endl; 
    }
    else if (2==choice){
        // math
        double TG_total;
        double tax_percent = 0.08; 
        double tax_cost = tax_percent * meal_cost; 
        TG_total = tax_cost + meal_cost; 
        // to go receipt 
    cout << setprecision(2) << fixed; 
        cout << "YOUR RECEIPT" << endl; 
        cout << "------------" << endl;
        cout << "SUBTOTAL: " << meal_cost << endl; 
        cout << "TAX:      " << tax_cost << endl; 
        cout << "TOTAL:    " << TG_total << endl; 
        cout << "------------" << endl; 
        cout << "THANK YOU! :)" << endl; 
        cout << endl; 
    }
    else {
        cout << "Invalid input.";
    }
}
   // question 3
   void question3() {
   cout << "Question #3 -- Pokemon Battle" << endl; 
   cout << "Please enter responses in lowercase." << endl;
   cout << endl;
   // code
   // intro 
   std::string message1 = "\"Hey, you! I challenge you to a battle!\" "; //quotation code courtesy of gpt!!
   std::cout << "LIV:" << message1 << std::endl; 
   cout << endl;
   cout << "Your opponent [LIV] has [2] available Pokémon for battle." << endl;
   cout << "You have [2] available Pokémon for battle."                << endl; 
   cout << "LIV sends out lvl. 45 EXEGGUTOR [🌿🔮]."                          << endl; 
   cout << "You can send out lvl. 45 PIKACHU [⚡] or lvl. 45 CHARIZARD [🔥🪽]."    << endl; 
   string pokemon1;
   string PIKACHU = "pikachu"; 
   string CHARIZARD = "charizard"; 
   cin >> pokemon1; 
   // choice 1 loop 
   if (PIKACHU == pokemon1) {
    std::string message2 = "\"Go, PIKACHU!\"";
    std::cout << "YOU:" << message2 << std::endl; 
    cout << endl;
    cout << "POKEDEX: EXEGGUTOR, the COCONUT POKÉMON, is a GRASS PSYCHIC type. This makes it weak to FIRE, POISON, FLYING, BUG, GHOST and DARK." << endl; 
    cout << "Thanks POKEDEX... that was helpful." << endl;
    cout << endl; 
    cout << "PIKACHU: lvl. 45" << endl; 
    cout << "HP:      135/135" << endl; 
    cout << "MOVES:   2"        << endl;  
    cout << endl; 
    cout << "THUNDERBOLT            ELECTROBALL" << endl; 
    cout << "electric               electric"     << endl; 
    cout << "DMG: 90                DMG: 120"     << endl; 
    string pikachu1; 
    string THUNDERBOLT = "thunderbolt"; 
    string ELECTROBALL = "electroball"; 
    cin >> pikachu1; 
    // attack1
    if (pikachu1 == THUNDERBOLT){
        cout << endl;
        cout << "PIKACHU used THUNDERBOLT!" << endl; 
        cout << "The attack... missed! It can do that?!" << endl;
        cout << "LIV's EXEGGUTOR used BULLDOZE! It's super effective!" << endl; 
        cout << "PIKACHU fainted!" << endl; 
        cout << "LIV shakes her head, "; 
        std::string message3 = "\"This feels cruel...just go..\""; 
        std::cout << message3 << std::endl;
        cout << endl;
        cout << "GAME OVER" << endl; 
        cout << endl; 
    }
    else if (pikachu1 == ELECTROBALL){
        cout << endl;
        cout << "PIKACHU used ELECTROBALL!" << endl; 
        cout << "It's not very effective..." << endl; 
        cout << "LIV's EXEGGUTOR used BULLDOZE! It's super effective!" << endl; 
        cout << "PIKACHU fainted!" << endl; 
        cout << "LIV shakes her head, "; 
        std::string message4 = "\"This is mean...just go..\""; 
        std::cout << message4 << std::endl;
        cout << endl;
        cout << "GAME OVER" << endl; 
        cout << endl; 
    }
    else {
        question3();
    }
   }
   else if (CHARIZARD == pokemon1) {
    cout << endl;
    cout << "POKEDEX: EXEGGUTOR, the COCONUT POKÉMON, is a GRASS PSYCHIC type. This makes it weak to FIRE, POISON, FLYING, BUG, GHOST and DARK." << endl; 
    cout << "Thanks POKEDEX... that was helpful." << endl;
    cout << endl; 
    cout << "CHARIZARD: lvl. 45" << endl; 
    cout << "HP:        135/135" << endl; 
    cout << "MOVES:     2"        << endl;  
    cout << endl; 
    cout << "BLASTBURN              HURRICANE" << endl; 
    cout << "fire                   flying" << endl; 
    cout << "DMG: 150               DMG: 120"  << endl; 
    string charizard1;
    string BLASTBURN = "blastburn";
    string HURRICANE = "hurricane";
    cin >> charizard1; 
    //attack 1
    if (BLASTBURN == charizard1){
        cout << endl; 
        cout << "CHARIZARD used BLASTBURN!" << endl;
        cout << "It's super, super effective!" << endl;
        cout << "LIV's EXEGGUTOR fainted!" << endl; 
        cout << endl;
        std::string message5 = "\"What?! Rrgh, go BLASTOISE!\"";
        std::cout << "LIV:" << message5 << std::endl;
        cout << endl;
        cout << "POKEDEX: BLASTOISE, the SHELLFISH POKÉMON is a WATER type. This makes it weak to ELECTRIC and GRASS." << endl;
        cout << "Thanks POKEDEX... that was helpful." << endl; 
        cout << endl; 
        cout << "BLASTOISE [💧] used HYDRO CANNON!" << endl; 
        cout << "Gah?! It's super effective!" << endl; 
        cout << "CHARIZARD fainted!" << endl; 
        std::string message6 = "\"I'm out of options, let's go PIKACHU!\""; 
        std::cout << "YOU:" << message6 << std::endl;
        cout << endl; 
        cout << "The static electricity coming from PIKACHU makes contact with the wet battlefield and..." << endl; 
        cout << "Yikes! Electrocutes BLASTOISE! There's no coming back from that!" << endl; 
        cout << "VICTORY!" << endl; 
        cout << endl; 

    }
    else if (HURRICANE == charizard1){
        cout << endl; 
        cout << "CHARIZARD used HURRICANE!" << endl; 
        cout << "It blew LIV and EXEGGUTOR straight off the battlefield!" << endl;
        cout << "Is that a victory? It's a victory!" << endl; 
        cout << "VICTORY!" << endl; 
        cout << endl;

    }
    else {
        question3();
    }

   }
   else {
    question3();
   }
   }
   
   
