// M1_HW1_ Circle_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
    SAI NATHA REDDY NOOLI - S0388420
*/
#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
    
    cout << "Circle Calculator " << endl << endl; 
    double radius;
    cout << "Enter radius  :"; 
    cin >> radius; 

    double pi = 3.14159;
    double diameter = 2 * radius; 
    double circumference = diameter * pi;
    double area = pi * pow(radius, 2.0); 

    circumference = round(circumference * 10) / 10; 
    area = round(area * 10) / 10; 

    cout <<"Diameter      :" << diameter << endl
        << "Circumference :" << circumference << endl
        << "Area          :" << area << endl
        << "Bye" << endl << endl;

    return 0; 

}

