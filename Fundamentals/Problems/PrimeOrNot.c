/* PROBLEM: Decide if a user input number is prime. */
#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int num);

int main(int argc, char const *argv[])
{
    int num = 0;
    bool prime = false;

    // take in user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // determine if prime or not prime
    if(num == 1){
        printf("\n%d is not prime!", num);
    }
    else if (num == 0) {
        printf("\n%d is not prime!", num);
    }
    else {
        prime = checkPrime(num);
        if (prime == true) {
            printf("\n%d is prime!", num);
        }
        else {
            printf("\n%d is not prime!", num);
        }
    }

    return 0;
}

bool checkPrime(int num){
    bool prime = false;

    for(int i=2;i<10;i++){
        if(i != num){
            if(num % i == 0){
                return false;
            }
            else {
                prime = true;
            }
        }
    }

    if (prime == true) {
        return true;
    }
}