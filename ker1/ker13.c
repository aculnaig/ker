/**
 * Exercise 1-3.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    /* print a heading above the table */
    printf("%s\t%2s\n", "Fahrenheit", "Celsius");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%5.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}