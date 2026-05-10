/*
Program:        Text Analyzer
Date Created:   20260510
Author:         Trevor Moses
Purpose:        Practice string operations by building a tool that processes and reports on a block of text 
*/

#include <iostream>   // cout, cin
#include <string>     // string, getline
#include <sstream>    // stringstream
#include <iomanip>    // fixed, setprecision
#include <cctype>     // toupper, tolower, ispunct
using namespace std;


//count characters function (including spaces)
int countWords(string text) {
    stringstream ss(text);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

//function to remove punctuation function
string stripPunctuation(string word) {
    string clean = "";
    for (char c : word) {
        if (!ispunct(c)) {
            clean += c;
        }
    }
    return clean;
}


//word averages function
double averageWordLength(string text) {
    stringstream ss(text);
    string word;
    int totalLetters = 0;
    int wordCount = 0;
    while (ss >> word) {
        totalLetters += stripPunctuation(word).length();
        wordCount++;
    }
    return (double)totalLetters / wordCount;
}


//count sentences function (count by . ? ! )
int numSentences(string text) {
    int count = 0;
    for (char c : text) {
        if (c == '.' || c == '!' || c == '?') {
            count++;
        }
    }
    return count;
}


//show longest word function.
string longestWord(string text) {
    stringstream ss(text);
    string word;
    string longest = "";
    while (ss >> word) {
        word = stripPunctuation(word);          // <-- add this line
        if (word.length() > longest.length()) {
            longest = word;
        }
    }
    return longest;
}

//change case function
string changeCase(string text, char mode) {
    for (int i = 0; i < text.length(); i++) {
        if (mode == 'u') {
            text[i] = toupper(text[i]);
        } else {
            text[i] = tolower(text[i]);
        }
    }
    return text;
}

//display function --- Declare last as it calls all functions above it.
void createDisplay(string text) {
    cout << "\nAnalysis:\n";
    cout << "  Characters (with spaces): " << text.length() << "\n";
    cout << "  Word count:               " << countWords(text) << "\n";
    cout << "  Sentence count:           " << numSentences(text) << "\n";
    cout << "  Longest word:             " << longestWord(text) << "\n";
    cout << "  Average word length:      " << fixed << setprecision(1)
         << averageWordLength(text) << " characters\n";
 
    cout << "\nUppercase:\n  " << changeCase(text, 'u') << "\n";
    cout << "\nLowercase:\n  " << changeCase(text, 'l') << "\n";
}



int main() {

    cout << "TEXT ANALYZER";
    cout << "\n-------------\n";
    cout << "Enter a sentence or paragraph:\n";
 
    string text;
    getline(cin, text);
 
    createDisplay(text);



    return 0;
}
