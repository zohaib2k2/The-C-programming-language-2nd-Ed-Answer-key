#include <stdio.h>

int main()
{

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");

    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%8.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
