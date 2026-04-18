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


    //Responses Section. Wanted more than the "cookie cutter" responses.
    string tooLow[] = { "Were you looking for the ground? Well, you need to go higher\n",
                        "Icarus aimed for the sun, you should look further up too\n",
                        "Are you trying to match your high school GPA? Increase your guess\n",
                        "Not your max bench press. You need to increase that number.\n",
                        "Did you start counting from zero? Go higher!\n",
                        "That number is lower than my expectations, try again!\n",
                        "My pet goldfish guessed higher than that!\n",
                        "Are you afraid of big numbers? Conquer your fear and go higher!\n",
                        "That guess is so low, it needs a shovel to get out!\n",
                        "I've seen higher numbers on a kindergarten math test!\n",
                        "Did you guess with your eyes closed? Aim higher!\n",
                        "That number couldn't reach the bottom shelf, let alone the answer!\n",
                        "Even a broken clock is right twice a day, keep trying higher!\n",
                        "Low budget, low effort, low guess. Think bigger!\n",
                        "That guess is so low it is underground, dig yourself out and go higher!\n",
                        "Are you limbo dancing? Because that guess went way too low!\n",
                        "I have seen higher ambitions from a sloth, go higher!\n",
                        "That number would not even get you on a roller coaster, too small!\n",
                        "Basement level thinking detected, take the elevator up!\n"
                    };
    string tooHigh[] = { "They say there is no mountain high enough. Well, you might want to go lower\n",
                         "You went high, well now you should go low(er)\n",
                         "We are above the clouds! You should look to the descent. Choose a smaller number\n",
                         "I'll be frank, your number is going in the wrong direction. Reverse course.\n",
                         "Houston, we have a problem. Your guess is in orbit!\n",
                         "Did you sneeze on the keyboard? That number is way too high!\n",
                         "Even Elon's rockets don't go that high, come back down!\n",
                         "That guess is so high it needs an oxygen mask!\n",
                         "Are you guessing or applying for a bank loan? Come down!\n",
                         "That number left the atmosphere, reel it back in!\n",
                         "Your ambition is admirable, your guess is not. Go lower!\n",
                         "I asked for a guess not the national debt, lower please!\n",
                         "Even my WiFi password is a smaller number than that!\n",
                         "That guess is so high it has its own weather system!\n",
                         "Did you sit on the keyboard? Because that number is way off!\n",
                         "Bold strategy, wrong direction. Dial it back!\n",
                         "Your guess just got a nosebleed from being so high!\n",
                         "That number is so big it has its own area code!\n",
                         "Somewhere between the moon and Mars is not the answer, go lower!\n"
                    };

    string justRight[] = { "Wow-zer! You got it! The number was ",
                           "Are you sure you don't have telepathy? The number was indeed ",
                           "Bullseye! High Score! You're on target. The number was ",
                           "Your answer, for a million secret points.....is CORRECT! The number was ",
                           "Right answer, wrong career! What I need is more photos of Spiderman!, but fine, the number was ",
                           "Did you peek at my screen? Either way, the number was ",
                           "Alert the press! We have a genius among us! The number was ",
                           "I am both impressed and suspicious. The number was ",
                           "Against all odds, you actually got it right! The number was "
                    };
    
    //cpp manuel says size is the modern way to use sizeof.
    int tooLowSize = size(tooLow);
    int tooHighSize = size(tooHigh);
    int justRightSize = size(justRight);

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
            cout << tooLow[rand() % tooLowSize];
        else if (guess > secretNumber)
            cout << tooHigh[rand() % tooHighSize];

    } while (guess != secretNumber);

    cout << justRight[rand() % justRightSize] << secretNumber
         << "! It took you " << attempts << " guess(es)!\n";

    return 0;
}