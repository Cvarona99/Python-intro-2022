#include <cs50.h>
#include <stdio.h>

int main()
{
    int terms = get_int ("Number of terms: ");
    int i, cube = 0;
    for (i = 1; i <= terms; i++)
    {
        cube = i*i*i;
        printf("Number is %i and the cube of %i is %i!\n", i , i , cube);
    }


}