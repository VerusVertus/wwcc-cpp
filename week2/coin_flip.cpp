/*
Program:        Coin Flip Generator
Date Created:   20260404
Author:         Trevor Moses
Purpose:        To complete Code Assignment 201.

Assignment Requirements

    Ask the user how many times they want to flip the coin
    Simulate flipping a coin that many times using random numbers
    Count and display the number of heads and tails
    Calculate and display the percentage of each outcome

*/

#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(time(0));

    /*
    --Putting this in an array--
    int flips;
    int heads = 0;
    int tails = 0;
    int flips_done = 0;
    */
    //[0] = numFlips, [1] = flips_done, [2] = heads, [3] = tails
    int coinStats[4] = {0,0,0,0};
    char result;

    cout << "Coin Flip Simulator. 100%% improved!" << endl;
    cout << "How many flips would you like to simulate? ";
    cin >> coinStats[0];

  do  {
    /*Figure our how to specify characters.
    Operators? we are using the %. Maybe another operated like in the nested examples in the lesson.
    */

    //Hint provided: rand() % 2
    //cplusplus.com/reference/cstdlib/rand/
    result = rand() % 2 ;
    /*
    condition ? valueIfTrue : valueIfFalse
    int max = (a > b) ? a : b;  // max will be 20
    rand() % 2 ? h : t; ?
    */
    switch (result)
    {
    case 0:
        /* code */
        break;
    case 1:
        /* code */
        break;
    }
  } while (coinStats[1] < coinStats[0]);
  
  
  //Here we put the text ourside the switch statement.
  cout << "heads" << coinStats[2] << endl;
  cout << "tails" << coinStats[3] << endl;


    return 0;
}