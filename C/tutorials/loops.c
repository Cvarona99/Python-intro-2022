#include <stdio.h>
#include <cs50.h>

int main()
{

int max = get_int("Max: \n");
int i;
    for (i= 0; i > max; i++)
    {
        printf("%i\n", i);
    }

    return 0;
}