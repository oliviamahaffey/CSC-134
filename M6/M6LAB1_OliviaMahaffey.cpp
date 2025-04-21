// csc-134
// M6LAB1
// oliviamahaffey
// 4/21/2025

#include <vector> 
#include <iostream>
using namespace std; 

int main() {

    // goal is to replicate buckshot roulette game simply

    // variables
    const int RED = 1; 
    const int BLACK = 2; 
    const int EMPTY = 0; 

    // example 1
    int magazine[] = {BLACK, RED, BLACK}; 
    for (int shell : magazine) {
        string shellname; 
        if (shell == BLACK) {
            shellname = "Black"; 
        }
        if (shell == RED) {
            shellname = "Red";
        }
        cout << "Next shell: " << shellname << endl; 
    }










    return 0; 
}