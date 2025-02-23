// CSC 134
// M3T1 
// oliviamahaffey
// 2/17/2025


#include <iostream>
using namespace std;


int main() {

    // Variables
    double len1, wid1, len2, wid2; 
    double area1, area2;

    // Ask user for the length and width
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the second rectangle? ";
    cin >> wid2;

    // Find the area
    area1 = len1 * wid1;
    area2 = len2 * wid2; 

    // Print the area
    cout << "Rectangle One has an area of " << area1 << "." << endl; 
    cout << "Rectangle Two has an area of " << area2 << "." <<endl; 

    cout << endl; 
    cout << "Calculction finished." << endl; 
    cout << endl;

    return 0;
}