#include <stdio.h>
#include <cs50.h>

int main()
{
    int n = get_int("Enter a number\n");

    printf("%i\n", n);

    while (n != 0)
    {
        if ( n < 0)
        {


            break;

        }
        else
        {
            get_int("Enter a number\n");
        }

    }



}