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

    //[0] = Number of flips requested, [1] = count of flips done, [2] = count of heads, [3] = count of tails
    int coinStats[4] = {0,0,0,0};
    char result;

    cout << "Coin Flip Simulator. 100% improved!\n";
    //validation to fit within int range. I tried it with a larger number and it broke the percentages. Did not want to use long long as the starter code defines using int.
    //Had just a while statement and that had no break. replace with a do-until (do-while).
    do {
        cout << "How many flips would you like to simulate?: ";
        cin >> coinStats[0];
        if (coinStats[0] <= 0 || coinStats[0] > 1000000000)
            cout << "Please enter a number between 1 and 1,000,000,000\n";
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
  cout << "Heads: " << coinStats[2] << " (" << coinStats[2]*100.00/coinStats[0] << "%)\n";
  cout << "Tails: " << coinStats[3]  << " (" << coinStats[3]*100.00/coinStats[0] << "%)\n";


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
