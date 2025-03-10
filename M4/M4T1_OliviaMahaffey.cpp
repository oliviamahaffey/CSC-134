// CSC 134
// M4T1 
// oliviamahaffey
// 3/10/2025


#include <iostream>
using namespace std;
  
int main()
{
    // part 1
    int number = 0; 
    while (number < 5) {
        cout << "Hello\n"; 
        number++; 
    }
    cout << "Finished." << endl; 
    // part 2
    const int MIN_NUM = 1; 
    const int MAX_NUM = 10; 
    cout << "Table of Squares" << endl; 
    cout << "----------------" << endl; 
    int num = MIN_NUM; 
    int sq; 
    while (num <= MAX_NUM) {
        sq = num * num; 
        cout << num << "\t" << sq << endl; 
        num = num + 1;
    }
    // part 3
    bool is_valid = false; 
    int choice; 
    while (is_valid == false) {
        cout << "Press 1 or 2 to finish." << endl;
        cin >> choice; 
        if (choice == 1) {
            cout << "You picked 1." << endl; 
            is_valid = true;
        }
        else if (choice == 2) {
            cout << "You picked 2." << endl; 
            is_valid = true; 
        }
        else {
            cout << "Sorry, not valid.  Try again." << endl; 
        }
    cout << "Goodbye.";
    }
    return 0; // done
}