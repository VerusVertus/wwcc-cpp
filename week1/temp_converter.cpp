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


int main() {
    //Variable Section
    char F_or_C;
    double temp_input;

    //Function to convert entered temperature.
    void TempConvert(temp_input) {
        double convertted_temp;
        switch(F_or_C) {
            case F:
                cout << "Farhenheit? No, you get Celcius." << endl;
                convertted_temp = (temp_input - 32) * 5/9; 
                break;
            case C:
                cout << "Celcius? No, you get Farhenheit." << endl;
                convertted_temp = (temp_input - 32) * 5/9 ;
                break;
            default:
                cout << "You didn't enter what I wanted you to. The program is ruined!" << endl;
                break;
        }
    }

    //Ask for user to input what kind of temp.
    cout << "What you want? (F)arhenheit or (C)elcius?";
    cin >> F_or_C;
    cin >> temp_input;
    TempConvert(temp_input);


    return 0;
}