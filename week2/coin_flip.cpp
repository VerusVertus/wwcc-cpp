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
    //[0] = flips, [1] = flips_done, [2] = heads, [3] = tails
    int coinStats[4] = {0, 0, 0, 0};
    char result;

    cout << "Coin Flip Simulator" << endl;
    cout << "How many flips would you like to simulate? ";
    cin >> flips;

  do  {
    //Figure our how to specify characters.
    result = rand()

    switch (result))
    {
    case h:
        /* code */
        break;
    case t:
        /* code */
        break;
    }
  } while (flips_done < flips);
  
  
  //Here we put the text ourside the switch statement.
  cout << "heads" << heads << endl;
  cout << "tails" << tails << endl;


    return 0;
}