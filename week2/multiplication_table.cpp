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
#include <iomanip>
#include <string>
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

    int width = to_string(end * end).length() + 1;

    // Print header row
    cout << setw(width) << " " << " |";
    for (int col = start; col <= end; col++) {
        cout << setw(width) << col << " |";
    }
    cout << "\n";

    // Print separator row
    for (int col = start; col <= end + 1; col++) {
        cout << string(width + 1, '-') << "|";
    }
    cout << "\n";

    // Print table body
    for (int row = start; row <= end; row++) {
        cout << setw(width) << row << " |";
        for (int col = start; col <= end; col++) {
            cout << setw(width) << row * col << " |";
        }
        cout << "\n";
    }

    return 0;
}