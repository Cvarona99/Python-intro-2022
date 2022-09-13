#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

bool only_digits(string s);
char rotate(char p, int k);

int main(int argc, string argv[])
{
    // Get the key
    if (argv != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

bool only_digits(string s)
{
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (!isdigit(s[i]))
        
    }
}