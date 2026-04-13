/*
Program:        Coin Flip Generator
Date Created:   20260404
Author:         Trevor Moses
Purpose:        To complete Code Assignment 201.

Validation nightmare! I am stopping before I go mad. 
*/

#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
#include <iomanip>  // For set precision. Percentages would not stay correct.
using namespace std;

int main() {
    srand(time(0));

    //[0] = Number of flips requested, [1] = count of flips done, [2] = count of heads, [3] = count of tails
    int coinStats[4] = {0,0,0,0};
    char result;

    cout << "Coin Flip Simulator. 100% improved!\n";

    do {
    cout << "How many flips would you like to simulate?: ";
    if (!(cin >> coinStats[0])) {
        cin.clear();                // clear error flag
        cin.ignore(10000, '\n');    // discard bad input
        coinStats[0] = -1;         // force back into loop
    }
    if (coinStats[0] <= 0 || coinStats[0] > 1000000000)
        cout << "Please enter a number between 1 and 1,000,000,000\n\n[------------Restarting------------]\n\n";
} while (coinStats[0] <= 0 || coinStats[0] > 1000000000);

    cout << "Simulating " << coinStats[0] << " flips...\n\n";

  do  {

        result = rand() % 2 == 0 ? 'h' : 't';

        switch (result)
        {
        case 'h':
            coinStats[1]++;
            coinStats[2]++;
            break;
        case 't':
            coinStats[1]++;
            coinStats[3]++;
            break;
        }
  } while (coinStats[1] < coinStats[0]);
  
  cout << "Results\n";
  cout << fixed << setprecision(2);
  cout << "Heads: " << coinStats[2] << " (" << coinStats[2]*100.0/coinStats[0] << "%)\n";
  cout << "Tails: " << coinStats[3]  << " (" << coinStats[3]*100.0/coinStats[0] << "%)\n";


    return 0;
}

    /*
    NOTES SECTION:
    --AI Disclaimer--
    AI tools were used to assist in debugging the input validation section of this program. 
    Specifically, Claude (Anthropic) suggested the use of cin.clear() and cin.ignore() to 
    handle invalid input that caused an infinite loop in the do-while validation block.

    Hint provided: rand() % 2
    cplusplus.com/reference/cstdlib/rand/
    plusplus.com/doc/tutorial/operators/
    Turn it into a true false and then assign character to it! what a work around.

    Return 1 for error.
    cplusplus.com/doc/tutorial/functions/

    Precision reference
    cplusplus.com/reference/iomanip/setprecision/

    */
