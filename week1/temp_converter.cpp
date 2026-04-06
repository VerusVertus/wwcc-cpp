/*
Program Name: Temperature Converter
Date created: 20260405
Author: Trevor Moses
Purpose: To take inputted units and temperature reading and convert it to the other units.
Fahrenheit to Celsius and vice versa.
*/
#include <iostream>
#include <cctype> //wanted the toupper. Acording to the internet I need this for it to work.
using namespace std;

void TempConvert(char F_or_C, double temp_input) {
    double converted_temp;
    switch(F_or_C) {
        case 'F':
            cout << "Fahrenheit? No, you get Celsius." << endl; 
            converted_temp = (temp_input - 32) * 5.0/9.0;
            cout << "Your temperature is now: " << converted_temp << " C" << endl;
            break;
        case 'C':
            cout << "Celsius? No, you get Fahrenheit." << endl;
            converted_temp = (temp_input * 9.0/5.0) + 32;
            cout << "Your temperature is now: " << converted_temp << " F" << endl;
            break;
        default:
            cout << "You didn't enter what I wanted you to. The program is ruined!" << endl;
            break;
    }
}

int main() {
    char F_or_C;
    double temp_input;

    cout << "What is the temperature you wish to convert? ";
    cin >> temp_input;

    cout << "Is this (F)ahrenheit or (C)elsius? ";
    cin >> F_or_C;
    F_or_C = toupper(F_or_C);

    TempConvert(F_or_C, temp_input);
    return 0;
}