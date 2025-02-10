// CSC 134
// M2LAB1
// Olivia Mahaffey
// 2/10/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

// establish variables
int length, width, height; 
int volume;


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
cout << "A crate with the dimensions " << length << " by " << width << " by " << height << ","; 
cout << "has a volume of: " << volume << "." << endl;
cout << endl; 

// calculate cost and charge
int cost, charge, profit;
cost = volume * 0.23;
charge = volume * 0.50;
profit = charge - cost;

// tell customer cost 
cout << "Your crate with a volume of " << volume << " will be $" << charge << "." << endl; 
cout << "Thank you!" << endl; 
cout << endl; 

//format results
cout << setprecision (2) << fixed; 
cout << "       SUMMARY        " << endl;
cout << "----------------------" << endl;
cout << "Volume:             " << volume << endl; 
cout << "Cost of production: $" << cost << endl; 
cout << "Sells for:          $" << charge << endl;
cout << "Company profit:     $" << profit << endl; 
cout << "----------------------";
cout << endl;

    return 0; // no errors
}