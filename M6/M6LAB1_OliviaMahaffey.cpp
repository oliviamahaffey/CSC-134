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

    // example 1
    // .size() tels how many items are in a vector, .push_back() adds an item to the end of the vector, .pop_back() removes an item from the end

    vector<int> mag; 
    // load
    mag.push_back(RED); 
    mag.push_back(BLACK); 
    int num_shells = 2; 
    // look at shells
    int current_shell = mag.at(num_shells-1); 
    cout << "Next shell: " << current_shell << endl; 
    // eject a shell
    mag.pop_back(); 
    num_shells--;
    // repeat process
    current_shell = mag.at(num_shells-1); 
    cout << "Next shell: " << current_shell << endl; 
    mag.pop_back(); 
    cout << "Mag contains " << mag.size() << " shells" << endl; 
    cout << "It could hold up to " << mag.capacity() << " before resizing." << endl; 
    return 0; 
}