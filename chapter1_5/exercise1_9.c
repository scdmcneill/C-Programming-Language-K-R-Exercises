// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include <stdio.h>

int main() {
    int character;
    int previousWasSpace = 0;
    
    while ((character = getchar()) != EOF) {
        if (character == ' ' || character == '\t') {
            if (!previousWasSpace) {
                putchar(character);
            }
            previousWasSpace = 1;
        } else {
            putchar(character);
            previousWasSpace = 0;
        }
    }
}