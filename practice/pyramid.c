#include <cs50.h>
#include <stdio.h>

int main()
{
    int i, j = 0;
    int height = get_int("Enter a height ");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%i", i);

        }
    printf("\n");
    }



}