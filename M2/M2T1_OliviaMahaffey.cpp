// CSC 134
// M2T1
// Olivia Mahaffey
// 1/29/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   // This program will simulate an apple orchard.
   // The owner is Olivia Mahaffey
string farm_name = " Liv's";
int num_apples = 10;
double cost_each = 0.25;

//new variables for M2T1

string user_name; 
int apples_to_buy;

//greet customer
cout << "Hello! What is your name? ";
cin >> user_name; 
cout << "Thanks for coming by, " << user_name << "!" << endl; 

cout << "Welcome to " << farm_name << " apple farm!" << endl;
cout << "There are " << num_apples << " apples in stock." << endl;
cout << "They cost $" << cost_each << " each." << endl;

cout << setprecision(2) << fixed;

// Find total price
double total_cost = num_apples * cost_each;
cout << "The price for all of them is: $" << total_cost << endl;

cout << endl; 
return 0;
}
