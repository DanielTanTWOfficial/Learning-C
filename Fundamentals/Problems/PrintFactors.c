/* PROBLEM: Take a user input number and print all its factors. */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, factor=1;
    // take in user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // get and print factors of number
    for(int i=0;i<num;i++){
        if(num % factor == 0){
            printf("%d ", factor);
        }
        factor += 1;
    }

    return 0;
}
