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
   // code
   void question3() {
   cout << "Question #3 -- Dungeon Crawler" << endl; 
   cout << endl;
   
   }
   
   
