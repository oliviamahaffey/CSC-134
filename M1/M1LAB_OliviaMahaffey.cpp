// CSC 134
// M1LAB - Apple Orchard
// Olivia Mahaffey
// 1/29/2025

#include <iostream>
using namespace std;

int main() {
   // This program will simulate an apple orchard.
   // The owner is Olivia Mahaffey
string name = "Liv";
int num_apples = 10;
double cost_each = 0.25;

cout << "Welcome to the" << name; " apple farm!" << endl;
cout << "There are" << num_apples; " apples in stock." << endl;
cout << "They cost $" << cost_each << " each." << endl;

// Find total price
double total_cost = num_apples * cost_each;
cout << "The price for all of them is: $" << total_cost << endl;

cout << endl; 
return 0;
}


