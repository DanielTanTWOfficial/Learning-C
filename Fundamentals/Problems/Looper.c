/*  PROBLEM: Write a program that keeps looping itself until the user inputs "quit".
    E.g.
    Input something: hello
    Input something: 123
    Input something: quit

*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char input[50];

    do
    {
        printf("Input something: ");
        scanf("%49s", &input);
    } while (strcmp(input, "quit") != 0);

    return 0;
}
