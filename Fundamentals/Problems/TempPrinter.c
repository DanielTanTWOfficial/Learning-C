/*  PROBLEM: Write a C program that prints all Fahrenheit and Celsius temperatures in 20 degree increments.
    RANGE OF TEMPERATURES: 32 - 212 degrees Farenheit
    CONVERSION: C = (F - 32) * 5 / 9
*/
#include <stdio.h>

int getCelsius(int fahrenheit);

int main(int argc, char const *argv[])
{
    /* set fahrenheit to 32 degrees */
    int fahrenheit = 32;
    int celsius;

    for(int i = 0; i < 10; i++){
        celsius = getCelsius(fahrenheit);
        printf("Fahrenheit: %d\n", fahrenheit);
        printf("Degrees Celsius: %d\n", celsius);
        fahrenheit += 20;
    }

    return 0;
}

int getCelsius(int fahrenheit){
    int celsius;
    celsius = (fahrenheit - 32) * 5 / 9;

    return celsius;
}