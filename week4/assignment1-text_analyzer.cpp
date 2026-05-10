/*
Program:        Text Analyzer
Date Created:   20260510
Author:         Trevor Moses
Purpose:        Practice string operations by building a tool that processes and reports on a block of text 
*/

#include <iostream>   // cout, cin
#include <string>     // string, getline
#include <sstream>    // stringstream (for splitting text into words)
#include <iomanip>    // fixed, setprecision (for one-decimal-place output)
#include <cctype>     // toupper, tolower, ispunct
using namespace std;


//count characters including spaces
int countWords(string text) {
    stringstream ss(text);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

//Would number of words (break by spaces)
//function

//count sentences (count by . ? ! that are followed by a space?)
string numSentences(string text) {

}

//show longest word
string longestWord(string text) {

}

//show average word length

//shows entire sentence in all uppercase
//function or incoke inline?

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


int main() {




    return 0;
}
