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

    // Your code here

    return 0;
}