#include <stdio.h>

/* print Celsius-Fahrenheit table
for celsius = -20, -10, 0, ..., 150; floating-point version */

int main() {

    printf("Celsius\tFahrenheit\n");

    float celsius, fahr;
    float lower, upper, step;

    lower = -20; /* lower limit of temperatuire scale */
    upper = 150; /* upper limit */
    step = 10; /* step size */

    celsius = lower;
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}