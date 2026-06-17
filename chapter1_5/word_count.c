// Word Counting Program Exercise 1-11
#include <stdio.h>

#define IN_WORD     1
#define OUT_WORD    0

int main() {
    int character;
    int characterCount = 0, spaceCount = 0, tabCount = 0, newLineCount = 0, wordCount = 0;
    int state = OUT_WORD;

    while ((character = getchar()) != EOF) {
        characterCount++;
        if (character == '\t') 
            tabCount++;
        else if (character == ' ')
            spaceCount++;
        else if (character == '\n')
            newLineCount++;

        if (character == ' ' || character == '\t' || character == '\n') {
            state = OUT_WORD;
        }
        else if (state == OUT_WORD) {
            state = IN_WORD;
            wordCount++;
        }
    }

    printf(" ----- Word Counting Program ------\n");
    printf("Word Count: %d\n", wordCount);
    printf("Space Count: %d\n", spaceCount);
    printf("Tab Count: %d\n", tabCount);
    printf("Number of Lines: %d\n", newLineCount);
    
    return 0;
}