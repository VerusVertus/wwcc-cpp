/*
Program:        To created display text with format specifiers
Date Created:   20260404
Author:         Trevor Moses
Purpose:        To complete Code Assignment 200.
*/

#include <iostream>
#include <cstdio>   // For printf
using namespace std;
 
int main() {
    int integer_value = 42;
    float float_value = 3.14159265f;
    double double_value = 3.14159265;
    char char_value = 'X';
    const char* string_value = "Hello, World!";

    // --- Format Specifier Practice ---
    printf("Format Specifier Practice\n");
    printf("------------------------\n\n");
 
    //Format Specifiers with precision
    //Integer
    printf("Integer:    %d\n",   integer_value);
    printf("Width:  |%8d|\n",  integer_value);
    printf("Left:   |%-8d|\n", integer_value);
    printf("ZeroPad:    |%08d|\n\n", integer_value);
    //Hex
    printf("Hex:    %x\n",   integer_value);
    printf("Hex+Precision:      %#x\n\n", integer_value);
    //Float
    printf("Float:  %f\n",    float_value);
    printf("Precision:  %.2f\n",  float_value);
    printf("Width+Precision:    |%14.6f|\n\n", float_value);
    //Scientic Notation
    printf("Scientific: %e\n\n",  double_value);
    //Char
    printf("Char:   %c\n\n",  char_value);
    //String
    printf("String: %s\n",    string_value);
    printf("Width:  |%20s|\n", string_value);

    //Name Box for signature [Winking Emoticon]
    printf("+----------+\n");
    printf("|          |\n");
    printf("|  %s  |\n", "Trevor");   // %s prints a string
    printf("|          |\n");
    printf("+----------+\n\n");
    
    return 0;
}
 