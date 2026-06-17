// Write a program that prints its input one word per line.
#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0

int main() {
    int character;
    int state = OUT_WORD;
    
    while ((character = getchar()) != EOF) {
        putchar(character);

        if (character == ' ' || character == '\t') {
            state = OUT_WORD;
            printf("\n");
        }
        else if (state == OUT_WORD){
            state = IN_WORD;
        }
    }

    return 0;
}