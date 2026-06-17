#include <stdio.h>
// Write a program to print a histogram of the frequencies of different characters in its input.

int main() {
    int c;
    int ascii[256] = {0};

    while ((c = getchar()) != EOF) {
        ascii[c]++;
    }

    for (int i = 0; i < 256; i++) {
        if (ascii[i] > 0) {
            if (i == '\t') {
                printf("\\t |");
            }

            else if (i == '\n') {
                printf("\\n |");
            }

            else if (i == ' ') {
                printf("space |");
            }

            else {
                putchar(i);
                printf(" |");            
            }

            for (int j = 0; j < ascii[i]; j++)
                    putchar('=');
            printf("\n");
        }
    }

    return 0;
}