/* PROBLEM: Take in a user input number and print the factorial to the console. */
#include <stdio.h>

int getFactorial(int num);

int main(int argc, char const *argv[])
{
    int num, factorial;

    // take user input
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        return 0;
    }
    else {
        factorial = getFactorial(num);
        printf("Factorial: %d", factorial);
    }

    return 0;
}

int getFactorial(int num) {
    int factorial = 1;

    for (int i=1;i<=num;i++) {
        factorial *= i;
    }
    return factorial;
}