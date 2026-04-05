/*
Program Name: Temperature Converter
Date created:
Author:
Purpose:

*/

#include <iostream>
#include <string>
using namespace std;
//Chapter 8.11 about user input.

int main() {
    //Variable Section
    string name;
    string password;

    //Ask for user to input name.
    cout << "Enter your name:";
    cin >> name;

    //display welcome message with inputted name
    cout << "I had a brother named " << name << "! Welcome to C++!" << endl;

    //Second prompt. How to make requirements for length/complexity?
    cout << "Please enter a top secret password: ";
    cin >> password;

    cout << name << "! You should never enter your password in plain text." << endl;
    cout << "Now I am going to violate security and display your password back to you." << endl;
    cout << endl;
    cout << password << " is what you entered. Go away now.";

    return 0;
}


/*
NOTES:
Book recoomends validating the input. How does one do that for a string?
    if (cin.fail()) {
            cout << "That was not text." << endl;
            cout << "Please run program again." << endl;
            return -1;
    }

Need to figure out how we know what to include at top.

*/