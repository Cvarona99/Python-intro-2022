#include <cs50.h>
#include <stdio.h>

int main()
{
    int i;
    int j;

    int n = get_int("Number of rows: \n");

    for (i = 0; i <= n; i++ )
    {
        for (j = 0; j <= 2*n-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}