/*
Program:        distance calculator
Date Created:   20260419
Author:         Trevor Moses
Purpose:        To complete Code Assignment 300.
*/

#include <iostream>
#include <cmath>     // For sqrt()
#include <iomanip>   // For setprecision() and fixed

using namespace std;


//function 1 - calculateDistance - d = sqrt[(x₂ - x₁)² + (y₂ - y₁)²]
double calculateDistance(double x1, double y1, double x2, double y2) {
    double diffX = x2 - x1; //breaking up the math. Here is the substraction part.
    double diffY = y2 - y1;
    return sqrt( (diffX * diffX) + (diffY * diffY) ); // squaring then taking the sqrt of the result

}

//funtion 2 - calculateMidpoint - mp = ((x₁+x₂)/2, (y₁+y₂)/2)
void calculateMidpoint() {
  // code to be executed
}


int main() {

    double x1, y1, x2, y2, distance, midpoint;

    //user Prompt for first set of coordinates (X1, Y1)
    cout << "Enter the coordinates of the first point:\nx1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;

    //user prompt ofr second set (X2, Y2)
    cout << "Enter the coordinates of the second point:\nx2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    //invoke the distance function
    distance = calculateDistance(x1,y1,x2,y2);


    //Display the coordinates entered, then display the midpoint.
    cout << "\nThe distance between (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is: " << distance;



    //midpoint
    //cout << "\nThe midpoint is: " << midpoint
}
