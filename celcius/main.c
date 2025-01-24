// celcius program
// print Fahrenheit-Celsius table for fahr = 0,20, ..., 300

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahr, celcuis;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celcuis = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celcuis);
        fahr = fahr + step;

    }
}
