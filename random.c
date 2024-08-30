#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// initializing  the max variable, so that it is available throught the file
const int max = 26;

// the function below returns a random letter from the alphabets
char randchar()
{
    char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
    int randIndex = rand() % max;
    char random_char = alphabets[randIndex];
    return random_char;
}
