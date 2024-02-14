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
    int k;
    string plain;
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    k = atoi(argv[1]);
    plain = get_string("plaintext: ");
}

bool only_digits(string s)
{
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (isdigit(s[i]))
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}

char rotate(char p, int k)
{
    char c;
    if (issupper(p))
    {
        c = (p - 'A' + k)%26 + 'A';
    }
    else if (islower(p))
    {
        c = (p - 'a' + k)%26 + 'a';
    }
    else
    {
        c = p;
    }



}