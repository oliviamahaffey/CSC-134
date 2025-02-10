// CSC 134 
// M1HW1
// oliviamahaffey
// 2/09/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // inserted apple farm program 
    // slightly confused about task instructions, lol
string movie_name = "Parasite";
int release_year = 2019;
double profit_bo = 258.13;
string fav_movie; 
//variables for M1HW1

//M1HW1 dialogue
cout << "What is your favorite movie? ";
cin >> fav_movie; 
cout << "Cool! My favorite movie is " << movie_name << "!" << endl; 
cout << movie_name << " released in " << release_year << " and made $" << profit_bo << " million at the box office.";

cout << endl; 

cout << setprecision(2) << fixed;


return 0;
}
