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


    //Responses Section. 
    string tooLow[] = { "Were you looking for the ground? Well, you need to go higher\n",
                        "Icarus aimed for the sun, you should look further up too\n",
                        "Wrong. Are you trying to match your high schools GPA? Increase your guess\n",
                        "We just restocked. You need to increase that number.\n"
                    };
    string tooHigh[] = { "They say their is not mountain high enough. Well, you might want to go lower\n",
                         "You went high, well now you should go low(er)\n",
                         "We are are above the clouds! You should look to the descent. Choose a smaller number\n",
                         "I'll be frank, your number is going in the wrong direction. Reverse course.\n"
                    };

    string justRight[] = { "Wow-zer! You got it! The number was ",
                           "Are you sure you don't have telepathy? The number was indeed ",
                           "Bullseye! High Score! You're on target. The number was ",
                           "Your answer, for a million secret points.....is CORRECT! The number was "

                    };

    int tooLowSize = std::size(tooLow);
    int tooHighSize = std::size(tooHigh);
    int justRightSize = std::size(justRight);

    cout << "Number Guessing Game\n";
    cout << "I'm thinking of a number between 1 and 100.\n\n";

 do {
        cout << "Enter your guess: ";

        if (!(cin >> guess)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number between 1 and 100.\n\n";
            continue;
        }

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100.\n\n";
            continue;
        }

        attempts++;

        if (guess < secretNumber)
            cout << "Too low! Try again.\n\n";
        else if (guess > secretNumber)
            cout << "Too high! Try again.\n\n";

    } while (guess != secretNumber);


    return 0;
}