#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

float convertToCelsius(float fahr);

int main() {

    printf("Fahrenheit\tCelsius\n");

    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = convertToCelsius(fahr);
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float convertToCelsius(float fahr) {
    return (5.0/9.0) * (fahr-32.0);
}
