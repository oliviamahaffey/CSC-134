// CSC 134
// M2T2
// Olivia Mahaffey
// 02/03/2025

// make a simple sales program that creates receipts

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// set up variables 
string store_name = "Liv Burgers"; 
string food_name = "Cheeseburger";  
double subtotal = 5.99; 

// take order
cout << "Welcome to " << store_name << "!" << endl;
cout << "You have one " << food_name; 
cout << " which costs $" << subtotal << endl; 
cout << "Here's your receipt, thank you!" << endl;
cout << endl;

// find totals
double total;
double tax_percent = 0.08; 
double tax_cost = tax_percent * subtotal; 
total = tax_cost + subtotal;

// print receipt
cout << setprecision (2) << fixed; // 2 decimal places
cout << "     YOUR RECEIPT" << endl; 
cout << "---------------------" << endl; 
cout << "  Subtotal:\t$" << subtotal << endl; 
cout << "  Tax:\t\t$" << tax_cost << endl;
cout << "---------------------" << endl; 
cout << "  Total:\t$" << total << endl; 
cout << "  Have a nice day!" << endl; 
cout << endl; 



return 0;
}
