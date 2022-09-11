#include <stdio.h>
#include <cs50.h>

int main()
{
    int i, mult = 0;
    int number = get_int("input the number: ");

    for (i = 1; i<= 10; i++)
    {
        mult = i * number;
        printf("%i X %i = %i\n", number, i, mult );
    }




}