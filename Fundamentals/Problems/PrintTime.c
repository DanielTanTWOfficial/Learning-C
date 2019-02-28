/* PROBLEM: Write a program that prints the current time whenever a user presses "t". */
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char input[2];
    int i = 1;

    do
    {
        printf("");
        scanf("%1s", &input);

        if (strcmp(input, "t") == 0) {
            time_t t = time(NULL);
            struct tm tm = *localtime(&t);

            printf("Current time is %d/%d/%d %d:%d:%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
        }
    } while (i == 1);

    return 0;
}
