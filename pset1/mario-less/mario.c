#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get height input
    int height;

    do
    {
        height = get_int ("Enter a height between 1 and 8: ");

    }
    while (height < 1 || height > 8);

    for ( int i = 1; i <= height; i++)
    {
        for ( int j = 0; j < i; j++)
        {
            printf("#");


        }
        printf("\n");
    }
}