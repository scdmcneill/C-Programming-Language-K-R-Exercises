#include <stdio.h>
// Write a program to print a histogram of the lengths of words in its input.

#define IN_WORD 1
#define OUT_WORD 0

int main() {
    int c;
    int lengthCount[21] = {0};
    int state = OUT_WORD;
    int charCount = 0;
    int greaterThan20 = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n'){
            if (state == IN_WORD){
                if (charCount <= 20)
                    lengthCount[charCount]++;
                else
                    greaterThan20++;
            }  
            state = OUT_WORD;
            charCount = 0;
        }
            
        else {
            state = IN_WORD;
            charCount++;
        }
    }

    if (state == IN_WORD) {
        if (charCount <= 20)
            lengthCount[charCount]++;
        else
            greaterThan20++;
    }
        
        
    
    printf("Word Length Histogram\n");
    printf("------------------------\n");
    for (int i = 0; i < 21; i++) {
        printf("Word length %d| ", i);
        for (int j = 0; j < lengthCount[i]; j++)
            putchar('-');
        printf("\n");
    }
    printf("Greater than 20 |");
    for (int i = 0; i < greaterThan20; i++) {
        putchar('-');
    }

    return 0;
}