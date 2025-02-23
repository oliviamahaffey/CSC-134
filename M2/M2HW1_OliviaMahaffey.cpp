// CSC-134
// M2HW1 - Silver
// Olivia Mahaffey
// 2/23/2025

// Question 2 -- General Crates (Modified)

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

cout << "QUESTION #2" << endl; 
cout << endl; 

// establish variables
double length, width, height; 
double volume;


// take crate order
cout << "Welcome.  Please enter your desired crate dimensions here. ";
cout << endl;
cout << "Length: ";
cin >> length; 
cout << "Width: ";
cin >> width;
cout << "Height: ";
cin >> height;

// this has to be below variables or it will break!! 
volume = length * width * height;

// print results
cout << "A crate with the dimensions " << length << " by " << width << " by " << height << ", "; 
cout << "has a volume of: " << volume << "." << endl;
cout << endl; 

// calculate cost and charge
double cost, charge, profit; // having variables as doubles allows use of decimals, int is whole numbers

// 
cost = volume * 0.3;
charge = volume * 0.52;
profit = charge - cost;

// tell customer cost 
cout << "Your crate with a volume of " << volume << " will be $" << charge << "." << endl; 
cout << "Thank you!" << endl; 
cout << endl; 

cout << "[COMPANY END]" << endl; 
cout << "Profit from this transaction was $" << profit << endl; 
cout << endl; 

// Question 4 -- Cheer Program

cout << "QUESTION #4" << endl;
cout << endl; 

// variables
string school, team; 

// take input
cout << "Please input your school name." << endl;
cin >> school;
cout << "Please input your school mascot or team name." << endl;
cin >> team;
cout << "Thank you. Processing..." << endl;
cout << endl;

// give output
cout << "Let's go " << school << "!!" << endl;
cout << "Let's go " << school << "!!" << endl;
cout << "Let's go " << school << "!!" << endl;
cout << "Let's go " << team << "!!" << endl;
cout << "Fight, fight, fight!!" << endl;
cout << endl;

// Question 3 -- Pizza Party

cout << "QUESTION #3" << endl;
cout << endl;

// establish variables
int guests, slices, pizzas, leftovers; 

// take input
cout << "Welcome to the Pizza Party Leftover Program." << endl;
cout << "We will assume there 3 slices of pizza per guest during these calculations." << endl; 
cout << "Please input variables:" << endl; 
cout << "Number of guests?: "; 
cin >> guests; 
cout << "Number of pizzas ordered?: ";
cin >> pizzas;  
cout << "Number of slices per pizza?: ";
cin >> slices; 
cout << endl; 
cout << "Calculating..." << endl; 

// calculate
int pizza_size = pizzas * slices; 
int slices_eaten = guests * 3; 
leftovers = pizza_size - slices_eaten; 

// give output
cout << "You had " << pizza_size << " slices of pizza when the party started." << endl; 
cout << "Your guests ate " << slices_eaten << " slices during the party." << endl;
cout << "You have " << leftovers << " slices leftover from the party. Enjoy them!" << endl; 
cout << endl;
cout << "Calculations finished.  Thank you for choosing the Pizza Party Leftover Program." << endl;
cout << endl;

return 0;

}