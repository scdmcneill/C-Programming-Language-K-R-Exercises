#include <stdio.h>

//count digits, white space, and others

int main() {
    int character, i, whiteCount, otherCount;
    int digitCount[10];

    whiteCount = otherCount = 0;

    for (i = 0; i < 10; i++)
        digitCount[i] = 0;

    while ((character = getchar()) != EOF) {
        if (character >= '0' && character <= '9')
            digitCount[character - '0']++;
        else if (character == ' ' || character == '\n' || character == '\t')
            whiteCount++;
        else 
            otherCount++;
    }

    printf("digits =");
    for (int i = 0; i < 10; i++) 
        printf("%d\n", digitCount[i]);
    printf(", white space = %d, other = %d\n", whiteCount, otherCount);

    return 0;
}