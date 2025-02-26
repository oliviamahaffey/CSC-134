// CSC-134
// M3HW1 - ??
// oliviamahaffey
// 2/26/2025

#include <iostream>
using namespace std; 

int main() {
   // question 1
   cout << "Question #1 -- Chatbot" << endl;  
   cout << endl;
   // code 
   cout << "Welcome to the Chatbot!" << endl; 
   cout << ". . . " << endl; 
   cout << "Do you like sushi 🍣? Please type 'yes' or 'no'." << endl;
   string choice;
   string yes = "yes";
   string no = "no";
   cin >> choice; 
   // if else
   if (choice == yes){
    cout << "Cool! I would say 'me too', but I am a robot." << endl;
   }
   else if (choice == no){
    cout << "The person programming me disagrees with you. Sorry!" << endl;
   }
   else {
    cout << "I'm sorry, I didn't quite get that..." << endl; 
   }

   // question 2
   cout << "Question #2 -- Calculator" << endl; 
   cout << endl;

   // question 3
   cout << "Question #3 -- Dungeon Crawler" << endl; 
   cout << endl;






    return 0;
}