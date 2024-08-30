#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

size_t size = 7;
// char *rand_string_alloc(char z, size_t size);

int main(void)
{
    // rand_string_alloc(7);
    srand(time(NULL));
    char s[size];
    int count = 0;
    while (count != 7)
    {
        s[count] = randchar();
        count++;
    }
    printf("random: %s\n", s);
    // *rand_string_alloc(s, size);
}

// Given Project code
// char *rand_string_alloc(size_t size)
// {

//     char *s = malloc(size + 1);
//     if (s)
//     {
//         rand_string(s, size);
//     }
//     return s;
// }