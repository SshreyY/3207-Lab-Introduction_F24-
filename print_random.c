#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"
// intialized the size variable here so that it is accessible all throughout the file
size_t size = 7;

// function prototypes
char rand_string(char *s, size_t size);
char *rand_string_alloc(size_t size);

int main(void)
{
    srand(time(NULL));
    // creating a new char variable to store the string that is produced in rand_string_alloc
    char *s = rand_string_alloc(size);
    if (s)
    {
        printf("Random String of 7 characters: %s\n", s);
        free(s); // freeing the string stored on RAM
    }
}

/*this function below takes in an empty s pointer char that is memory allocated
by the given size in the main to store the random seven characters that are
produced randomly by randchar() in random.c file
*/
char rand_string(char *s, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        s[i] = randchar();
    }
    return *s;
}

// Given Project code
char *rand_string_alloc(size_t size)
{

    char *s = malloc(size + 1);
    if (s)
    {
        rand_string(s, size);
    }
    return s;
}