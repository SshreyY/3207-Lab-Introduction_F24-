#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int max = 26;

char randchar()
{
    char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
    int randIndex = rand() % max;
    char random_char = alphabets[randIndex];
    return random_char;
}
