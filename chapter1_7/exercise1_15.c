#include <stdio.h>
// Rewrite the temperature conversion program of Section 1.2 to use a function
// for conversion

void fahrenheit_celsius_table(int lower, int upper, int step);

int main() {

    fahrenheit_celsius_table(0, 500, 20);

    return 0;
}    

void fahrenheit_celsius_table(int lower, int upper, int step) {
    float fahrenheit = lower;
    printf("Fahrenheit\tCelsius\n");
    printf("---------------------\n");
    while (fahrenheit <= upper) {
        float celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%.2f\t\t%.2f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}