#include <stdio.h>

// Revise the main routine of the longest-line program so it will correctly
// print the length of arbitartitly long input lines, and as much as possible 
// of the text.

#define MAXLINE 1000

int mygetline(char s[], int limit);
void copy(char to[], char from[]);

int main() {
    int length;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((length = getline(line, MAXLINE)) > 0) {
        if (length > max) {
            max = length;
            copy(longest, line);
        }
    }

    if (max > 0)
        printf("%d, %s", max, longest);

    return 0;
}

int mygetline(char s[], int limit) {
    int c, i, length;

    i = 0;
    length = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        length++;
        if (i < limit - 1) {
            s[i] = c;
            i++;
        }
    }

    if (c == '\n') {
        length++;
        if (i < limit - 1) {
            s[i] = c;
            i++;
        }
    }

    s[i] = '\0';
    return length;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}