// csc-134
// m4hw1 - bronze ?
// oliviamahaffey
// 3/25/2025

#include <iostream> 
using namespace std; 
void sum_min_multi (int sum, minimum, multiple);

int main(){
cout << "FIVE TIMES TABLE" << endl; 
cout << "----------------" << endl; 
const int MIN = 1; 
const int MAX = 12; 
    while (minimum <= maximum) {
        int math = sum_min_multi(); 
        cout << multiple << " times " << minimum << " is " << sum << "." << endl; 
       // cout << "     " << minimum << "\t" << sum << endl; (makes a chart not what assignment wants :( )
        minimum = minimum + 1; 
    }
return 0;
}

void sum_min_multi(){
    int minimum = MIN; 
    int maximum = MAX; 
    int multiple, sum; 
    multiple = 5; 
    sum = minimum * multiple;


} 