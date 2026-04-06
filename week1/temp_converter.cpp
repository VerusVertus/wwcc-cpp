/*
Program Name: Temperature Converter
Date created: 20260405
Author: Trevor Moses
Purpose: To take inputted units and temperature reading and convert it to the other units. 
Farenheit to Celcius and vice versa.

*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


// Apparently, functions go outside of main and variables are not global.
void TempConvert(char F_or_C, double temp_input) {
    double convertted_temp;
    switch(F_or_C) {
        case 'F':  // char literals need single quotes
            cout << "Farhenheit? No, you get Celcius." << endl;
            convertted_temp = (temp_input - 32) * 5.0/9.0;
            cout << "Your temperature is now: " << convertted_temp << " C" << endl;
            break;
        case 'C':  // char literals need single quotes
            cout << "Celcius? No, you get Farhenheit." << endl;
            convertted_temp = (temp_input * 9.0/5.0) + 32;  // Fixed: wrong formula was here
            cout << "Your temperature is now: " << convertted_temp << " F" << endl;
            break;
        default:
            cout << "You didn't enter what I wanted you to. The program is ruined!" << endl;
            break;
    }
}

int main() {
    // Variable Section
    char F_or_C;
    double temp_input;

    // Ask for user to input what kind of temp.
    cout << "What you want? (F)arhenheit or (C)elcius? ";
    cin >> F_or_C;

    cout << "What is the temperature reading to convert?";
    cin >> temp_input;

    //what happens when the function and the main use the same variables? Do we really have to declare them twice?
    TempConvert(F_or_C, temp_input);
    return 0;
}
