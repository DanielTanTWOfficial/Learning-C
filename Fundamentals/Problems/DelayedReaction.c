/*  PROBLEM: Write a program that prints a string to the console when a user inputs something, but only after a delay of
    5 seconds.
*/
#include <stdio.h>
#include <time.h>

void delay(int seconds);

int main(int argc, char const *argv[])
{
    char input[50];
    int i = 1;

    do
    {
        printf("Input something: ");
        scanf("%49s", &input);

        delay(5);

        printf("May the Force be with you...\n\n");
    } while (i == 1);

    return 0;
}

void delay(int seconds)
{
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * seconds; 
  
    // Storing current number of clock ticks since start of program
    clock_t start_time = clock(); 
  
    // looping till number of milliseconds from starting clock ticks is reached
    while (clock() < start_time + milli_seconds);
}