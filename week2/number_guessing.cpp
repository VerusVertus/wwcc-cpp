/*
Program:        Numer guessing game
Date Created:   20260412
Author:         Trevor Moses
Purpose:        To complete Code Assignment 202.


REQUIREMENTS:
Generate a random number between 1 and 100
Ask the user to guess the number
Provide feedback if the guess is too high or too low
Keep track of how many guesses the user makes
Continue until the user guesses correctly
Display a congratulatory message with the number of guesses when the user wins
*/

#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Number Guessing Game\n";
    cout << "I'm thinking of a number between 1 and 100.\n\n";

    do {
        cout << "Number Guessing Game\nI'm thinking of a number between 1 and 100.\n\nEnter your guess: ";
        if (!(cin >> coinStats[0])) {
            cin.clear();                // clear error flag
            cin.ignore(10000, '\n');    // discard bad input
            coinStats[0] = -1;         // force back into loop
        }
        if (coinStats[0] <= 0 || coinStats[0] > 1000000000)
            cout << "Please enter a number between 1 and 1,000,000,000\n\n[------------Restarting------------]\n\n";
    } while (guess != secretNumber);

    return 0;
}