// csc-134
// M5LAB2
// oliviamahaffey
// 4/2/2025

#include <iostream>
using namespace std;

double getLength(); 
double getWidth(); 
double getArea(double length, double width); 
void displayData(double length, double width, double area);

int main()
{	
   double length, width, area;
   length = getLength(); 
   width = getWidth(); 
   area = getArea(length, width);
   cout << endl; 
   displayData(length, width, area);

   return 0;
}

double getLength(){
    cout << "What is the length of your rectangle? ";
    double length; 
    cin >> length; 
    return length; 
}

double getWidth(){
    cout << "What is the width of your rectangle? ";
    double width; 
    cin >> width; 
    return width;
}

double getArea(double length, double width){
    double area; 
    area = length * width;
    return area; 
}

void displayData(double length, double width, double area){
    cout << "Rectangle Data:" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl; 
}