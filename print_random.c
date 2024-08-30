
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int main()
{
    int a;

    /* seed the randomizer */
    srand((unsigned)time(NULL));

    printf("Today's random word: ");
    // the for loop below will loop 7 times and get a random character from random.c file
    for (a = 0; a < 7; a++)
        putchar(randchar());
    putchar('\n');

    return (0);
}