// CSC-134
// M3LAB2
// oliviamahaffey
// 2/26/2025

#include <iostream>
using namespace std; 

int main() {
// variables 
int num_grade; 
string letter_grade;

// ask for # grade
cout << "Number grade to letter grade conversion program." << endl; 
cout << "Enter the number grade: "; 
cin >> num_grade; 
// find letter grade
if (num_grade >= 90 && num_grade < 100){
    letter_grade = "n A";
    cout << "The grade " << num_grade << " is a" << letter_grade << "." << endl; 
}
if (num_grade >= 80 && num_grade < 90){
    letter_grade = " B";
    cout << "The grade " << num_grade << " is a" << letter_grade << "." << endl; 
}
if (num_grade >= 70 && num_grade < 80){
    letter_grade = " C";
    cout << "The grade " << num_grade << " is a" << letter_grade << "." << endl; 
} 
if (num_grade >= 60 && num_grade < 70){
    letter_grade = " D";
    cout << "The grade " << num_grade << " is a" << letter_grade << "." << endl; 
}
if (num_grade >= 0 && num_grade < 60){
    letter_grade = "n F";
    cout << "The grade " << num_grade << " is a" << letter_grade << "." << endl; 
}
else {
    cout << "Please restart the progam and enter a valid integer between 0-100." << endl; 
}
return 0; 
}