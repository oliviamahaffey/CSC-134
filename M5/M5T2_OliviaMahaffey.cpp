// csc-134
// M5T2
// oliviamahaffey
// 3/28/2025

#include <iostream>
using namespace std;

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

// Function to print one line of the answer
void printAnswerLine(int num) {
    cout << num << " squared is " << square(num) << endl;
}

// Main function
int main() {
    cout << "Numbers and their squares:" << endl;
    
    for (int i = 1; i <= 10; i++) {
        printAnswerLine(i);
    }
    
    return 0;
}