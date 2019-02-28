/*  PROBLEM: Take in a number and print its digits in English
    E.g. 100 = one zero zero
*/
#include <stdio.h>

char* digitToEnglish(int num);

int main(int argc, char const *argv[])
{
    int num;

    // take in number
    printf("Enter a number: ");
    scanf("%d", &num);

    char buf[50] = digitToEnglish(num);

    printf("%s", buf);

    return 0;
}

char* digitToEnglish(int num)
{
    char english[50] = "";
    
}