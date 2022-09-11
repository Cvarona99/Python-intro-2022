#include <cs50.h>
#include <stdio.h>

int main()
{
    int i, j = 0;
    int height = get_int("Enter a height ");

    for (i = 0; i < height; i++)
    {
        for (i = 0; j <= i; j++)
        {
            printf("*");

        }
    printf("\n");
    }



}