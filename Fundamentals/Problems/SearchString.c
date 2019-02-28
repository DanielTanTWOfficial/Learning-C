/*  PROBLEM: Search a user input string for a specific word.
    E.g. "There was an apple in the yard.", check if "apple" is in the string.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char input[100];
    char key[10] = "apple";

    printf("Input a string to search: ");
    fgets(input, 100, stdin);


    // convert all characters to lowercase before comparing
    for (int i=0; input[i];i++) {
        input[i] = tolower(input[i]);
    }

    if (strstr(input, key) != NULL) {
        printf("apple found!");
    }
    else {
        printf("apple not found!");
    }

    return 0;
}
