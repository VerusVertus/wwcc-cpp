/*
Program:        Currency Converter
Date Created:   20260419
Author:         Trevor Moses
Purpose:        To complete Code Assignment 303.
*/

#include <iostream>
#include <iomanip>

using namespace std;
 
//Conversion rates
const double USD2EUR = 0.85;
const double USD2GBP = 0.74;
const double USD2JPY = 110.33;
 
//USD to EUR
double dollar2Euro(double amount) {
    return amount * USD2EUR;
}
 
//USD to GBP
double dollar2Pound(double amount) {
    return amount * USD2GBP;
}
 
//USD to JPY
double dollar2Yen(double amount) {
    return amount * USD2JPY;
}
 
//count function
int getConversionCount(bool increment = false) {
    static int count = 0;
    if (increment) {
        count++;
    }
    return count;
}
 
//Repeatable Menu Display
void displayMenu() {
    cout << "\nCURRENCY CONVERTER\n";
    cout << "------------------\n";
    cout << "1. Convert USD to Euro (EUR)\n";
    cout << "2. Convert USD to British Pound (GBP)\n";
    cout << "3. Convert USD to Japanese Yen (JPY)\n";
    cout << "4. Exit\n\n";
}
 
//Ask for choice dialog
int getMenuChoice() {
    int choice;
    while (true) {
        cout << "Enter your choice (1-4): ";
        if (cin >> choice && choice >= 1 && choice <= 4) {
            return choice;
        }
        cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        cin.clear();
        cin.ignore(1000, '\n');
    }
}
 
// Reads a valid (non-negative) USD amount from the user
double getUsdAmount() {
    double amount;
    while (true) {
        cout << "Enter amount in USD: ";
        if (cin >> amount && amount >= 0) {
            return amount;
        }
        cout << "Invalid amount. Please enter a non-negative number.\n";
        cin.clear();
        cin.ignore(1000, '\n');
    }
}
 
int main() {
    // Make sure all currency output shows 2 decimal places
    cout << fixed << setprecision(2);
 
    while (true) {
        displayMenu();
        int choice = getMenuChoice();
 
        if (choice == 4) {
            break;
        }
 
        double amount = getUsdAmount();
        double result = 0.0;
        string currencyCode;
 
        switch (choice) {
            case 1:
                result = dollar2Euro(amount);
                currencyCode = "EUR";
                break;
            case 2:
                result = dollar2Pound(amount);
                currencyCode = "GBP";
                break;
            case 3:
                result = dollar2Yen(amount);
                currencyCode = "JPY";
                break;
        }
 
        //increment if true.
        getConversionCount(true);
 
        cout << amount << " USD = " << result << " " << currencyCode << "\n\n";
        cout << "Number of conversions performed: "
             << getConversionCount() << "\n\n";
 
        cout << "Would you like to perform another conversion?! (y/n): ";
        char again;
        cin >> again;
        if (again != 'y' && again != 'Y') {
            break;
        }
    }
 
    cout << "\nThank you for using the Currency Converter!?\n";
    return 0;
}
