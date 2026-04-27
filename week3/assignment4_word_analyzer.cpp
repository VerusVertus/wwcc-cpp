/*
Program:        Word Analysis
Date Created:   20260419
Author:         Trevor Moses
Purpose:        To complete Code Assignment 304.
*/

#include <iostream>
#include <string>
#include <cctype>
 
using namespace std;
 
//function to recurse to counts vowels
int Vowels(string word) {
    int count = 0;
    for (char c : word) {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || 
            lower == 'o' || lower == 'u') {
            count++;
        }
    }
    return count;
}
 
//function to count consonants.
int Consonants(string word) {
    int count = 0;
    for (char c : word) {
        char lower = tolower(c);
        // Must be a letter AND not a vowel
        if (isalpha(c) && lower != 'a' && lower != 'e' && lower != 'i' &&
            lower != 'o' && lower != 'u') {
            count++;
        }
    }
    return count;
}
 
//palindrome checker function
bool Palindrome(string word) {
    int left = 0;
    int right = word.length() - 1;
    
    while (left < right) {
        if (tolower(word[left]) != tolower(word[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
 
char firstLetter(string word) {
    if (word.empty()) {
        return '\0';
    }
    return word[0];
}
 
//reverses word
string reverse(string word) {
    string reversed = "";
    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }
    return reversed;
}
 
int main() {
    char choice;
    
    do {
        string word;
        cout << "Enter a word: ";
        cin >> word;
        
        cout << "\nWord Analysis:\n";
        cout << "-------------\n";
        cout << "Original word: " << word << "\n";
        cout << "Number of vowels: " << Vowels(word) << "\n";
        cout << "Number of consonants: " << Consonants(word) << "\n";
        

        char first = firstLetter(word);
        if (first == '\0') {
            cout << "First letter: (none - empty word)\n";
        } else {
            cout << "First letter: " << first << "\n";
        }
        
        cout << "Reversed: " << reverse(word) << "\n";
        cout << "Is palindrome: " << (Palindrome(word) ? "Yes" : "No") << "\n";
        
        cout << "\nWould you like to analyze another word? (y/n): ";
        cin >> choice;
        cout << "\n";
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Thank you for using the Word Analyzer!\n";
    
    return 0;
}
