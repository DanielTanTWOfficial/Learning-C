#include <stdio.h>

/* printing user input using scanf and printf */
int main(int argc, char const *argv[])
{
    int x, y, z;

    /* grab user input */
    printf("Enter 2 numbers: ");
    /* we can grab multiple inputs! */
    scanf("%d %d", &x, &y);

    z = x + y;

    printf("%d + %d = %d\n", x, y, z);

    return 0;
}
