/*
Program:        Coin Flip Generator
Date Created:   20260404
Author:         Trevor Moses
Purpose:        To complete Code Assignment 203.

Requirements
Ask the user for a starting number and an ending number
Check that the starting number is less than the ending number
Generate a multiplication table from the starting number to the ending number
Format the table neatly with properly aligned columns
Include row and column headers showing the numbers being multiplied

*/

#include <iostream>
#include <iomanip>  // For setw()
using namespace std;

int main() {
    int start, end;

    cout << "Multiplication Table Generator\n\n";

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    if (start > end) {
        cout << "Error: Starting number must be less than ending number.\n";
        return 1;
    }

    cout << "\n";

    // Calculate width based on the largest possible product
    int maxProduct = end * end;
    int width = to_string(maxProduct).length() + 1; 

    // Print header row
    cout << setw(width) << " " << "|";
    for (int col = start; col <= end; col++) {
        cout << setw(width - 1) << col << " |";
    }
    cout << "\n";

    // Print separator row
    for (int col = start; col <= end + 1; col++) {
        cout << string(width, '-') << "|";
    }
    cout << "\n";

    // Print table body
    for (int row = start; row <= end; row++) {
        cout << setw(width - 1) << row << " |";
        for (int col = start; col <= end; col++) {
            cout << setw(width - 1) << row * col << " |";
        }
        cout << "\n";
    }

    return 0;
}