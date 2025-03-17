// csc-134
// m4lab1
// oliviamahaffey
// 3/17/2025

#include <iostream>
using namespace std; 

int main () {
    string pixel = "🦐";
    cout << pixel << endl; 

// loop type 1: while loop    
    int count = 0; 
    while (count < 5) {
        cout << pixel; 
        count++; 
    }
    cout << endl; 

// loop type 2: do while loop    
    count = 0; 
    do {
        cout << pixel << " ";
        count++; 
    } while (count < 5);
    cout << endl; 

// loop type 3: for loop
    for (int i=0; i < 10; i++) {
        cout << pixel << "  "; 
    }
    cout << endl; 

// printing horizontal vs. vertical
const int size = 5; 

cout << pixel << " printed horizontally (row)" << endl; 
for (int i = 0; i < size; i++) {
    cout << pixel << " ";
} 
cout << endl; 
cout << pixel << " printed vertically (column)" << endl; 
for (int i = 0; i < size; i++) {
    cout << pixel << endl; 
}
cout << endl; 

// printing a box!
int width; 
int height; 

cout << "Hello. This program will print a Shrimp Box with your desired dimensions." << endl; 
cout << "Please enter your desired WIDTH: "; 
cin >> width; 
cout << "Great. Please enter your desired HEIGHT: "; 
cin >> height; 
cout << "Printing a box " << width << " by " << height << "." << endl; 

for (int h=0; h < height; h++ ) {
    for (int w=0; w < width; w++) {
    cout << pixel << " ";
    }
    cout << endl; 
}


return 0;
}