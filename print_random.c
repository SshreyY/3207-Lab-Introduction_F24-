#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

size_t size = 7;
char rand_string(char *s, size_t size);
char *rand_string_alloc(size_t size);

int main(void)
{
    srand(time(NULL));

    char *s = rand_string_alloc(size);
    if (s)
    {
        printf("Random String of 7 characters: %s\n", s);
        free(s);
    }
}

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