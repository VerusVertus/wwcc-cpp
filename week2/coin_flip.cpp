/*
Program:        Coin Flip Generator
Date Created:   20260404
Author:         Trevor Moses
Purpose:        To complete Code Assignment 201.
*/

#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(time(0));

    //[0] = numFlips, [1] = flips_done, [2] = heads, [3] = tails
    int coinStats[4] = {0,0,0,0};
    char result;

    cout << "Coin Flip Simulator. 100% improved!\n";
    cout << "How many flips would you like to simulate?: ";
    cin >> coinStats[0];

    //validation to fit within int range. I tried it wil a larger number and it proke the percentages.
    if (coinStats[0] <= 0 || coinStats[0] > 1000000000) {
        cout << "Please enter a number between 1 and 1000000000\n";
        return 1;
    }

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
  cout << "Heads: " << coinStats[2] << "(" << coinStats[2]*100/coinStats[0] << "%)\n";
  cout << "Tails: " << coinStats[3]  << "(" << coinStats[3]*100/coinStats[0] << "%)\n";


    return 0;
}

    /*
    NOTES SECTION:
    Hint provided: rand() % 2
    cplusplus.com/reference/cstdlib/rand/
    plusplus.com/doc/tutorial/operators/
    Turn it into a true false and then assign character to it! what a work around.

    Return 1 for error.
    https://cplusplus.com/doc/tutorial/functions/
    */
