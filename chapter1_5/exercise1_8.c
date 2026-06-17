/* Write a program to count blanks, tabs, and newlines */
#include <stdio.h>

int main() {
    int character;
    int characterCount = 0, blankCount = 0, tabCount = 0, newLineCount = 0;

    while ((character = getchar()) != EOF) {
        if (character == ' ')
            blankCount++;
        else if (character == '\t')
            tabCount++;
        else if (character == '\n')
            newLineCount++;
        characterCount++;
    }

    printf("Character Count: %d\n", characterCount);
    printf("Blank Count %d\n", blankCount);
    printf("Tab Count: %d\n", tabCount);
    printf("New Line Count: %d\n", newLineCount);
}