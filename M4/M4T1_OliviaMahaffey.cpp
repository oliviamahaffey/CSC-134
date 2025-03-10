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

    return 0; // done
}