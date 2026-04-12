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

    printf("Format Specifier Practice\n");
    printf("------------------------\n\n");

    // --- Format Specifier Practice ---
    printf("Format Specifier Practice\n");
    printf("------------------------\n\n");
 
    //%% acts like an escape character
    
    //Format SpecifiersSection
    //Basic integer
    printf("       %d\n", integer_value);
 
    //Hexadecimal
    printf("           %x\n", integer_value);
 
    //Float
    printf("         %f\n", float_value);
 
    //Scientific notation
    printf("    %e\n", double_value);
 
    //Single character
    printf("      %c\n", char_value);
 
    //String
    printf("        %s\n\n", string_value);
 
    //Width + Precision Section

    
    return 0;
}
 