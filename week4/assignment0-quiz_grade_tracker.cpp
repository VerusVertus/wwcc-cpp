/*
Program:        Quiz Grade Tracker
Date Created:   20260509
Author:         Trevor Moses
Purpose:        To take in quiz scores then provide statistics for the group of grade.
*/
#include <iostream>
#include <iomanip>
using namespace std;
 
//Define global number of quizes. Given to us by professor.
const int NUM_QUIZZES = 5;
 
//function for letter grade.
char getLetterGrade(double score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}
 
//function to create the display
// Prints the full quiz report
void displayReport(const double scores[], double average,
                   double highest, int highestIndex,
                   double lowest, int lowestIndex,
                   int countA, int countB, int countC,
                   int countD, int countF) {
    cout << fixed << setprecision(2);
    cout << "\nQuiz Report \n";
    cout << "-----------------------\n";
    cout << "\nQuiz Results:\n";
    for (int i = 0; i < NUM_QUIZZES; i++) {
        cout << "  Quiz " << (i + 1) << ": " << scores[i]
             << " (" << getLetterGrade(scores[i]) << ")\n";
    }
    cout << "\nStatistics:\n";
    cout << "  Average Score: " << average << " (" << getLetterGrade(average) << ")\n";
    cout << "  Highest Score: " << highest << " on Quiz " << (highestIndex + 1) << "\n";
    cout << "  Lowest Score:  " << lowest << " on Quiz " << (lowestIndex + 1) << "\n";
    cout << "  Overall Course Grade: " << getLetterGrade(average) << "\n";
    cout << "\nGrade Distribution:\n";
    cout << "  A: " << countA << "\n";
    cout << "  B: " << countB << "\n";
    cout << "  C: " << countC << "\n";
    cout << "  D: " << countD << "\n";
    cout << "  F: " << countF << "\n";
}
 
//funtion to read inputted quiz scores
// Prompts the user and fills the scores array with quiz scores
void readScores(double scores[]) {
    cout << "Enter scores for " << NUM_QUIZZES << " quizzes (0-100):\n";
    for (int i = 0; i < NUM_QUIZZES; i++) {
        cout << "  Quiz " << (i + 1) << ": ";
        cin >> scores[i];
    }
}
 
int main() {
    //declare the array for storage
    double scores[NUM_QUIZZES];
 
    //invoke function to get scores.
    readScores(scores);
 
    //section for calculating stats
    //Variables (initialize with first element)
    double sum = scores[0];
    double highest = scores[0];
    double lowest = scores[0];
    int highestIndex = 0;
    int lowestIndex = 0;
 
    //Calculate sum, highest and lowest
    for (int i = 1; i < NUM_QUIZZES; i++) {
        sum += scores[i];
        if (scores[i] > highest) {
            highest = scores[i];
            highestIndex = i;
        }
        if (scores[i] < lowest) {
            lowest = scores[i];
            lowestIndex = i;
        }
    }
 
    //get average
    double average = sum / NUM_QUIZZES;
 
    //Count grade distribution
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    for (int i = 0; i < NUM_QUIZZES; i++) {
        switch (getLetterGrade(scores[i])) {
            case 'A': countA++; break;
            case 'B': countB++; break;
            case 'C': countC++; break;
            case 'D': countD++; break;
            case 'F': countF++; break;
        }
    }
 
    //make display section
    /* Call displayReport with arguments in this order:
    1. scores         - the array of quiz scores
    2. average        - the calculated average score
    3. highest        - the highest score value
    4. highestIndex   - index (0-4) of the highest score
    5. lowest         - the lowest score value
    6. lowestIndex    - index (0-4) of the lowest score
    7. countA         - number of A grades
    8. countB         - number of B grades
    9. countC         - number of C grades
    10. countD        - number of D grades
    11. countF        - number of F grades */
    displayReport(scores, average, highest, highestIndex,
                  lowest, lowestIndex,
                  countA, countB, countC, countD, countF);
 
    return 0;
