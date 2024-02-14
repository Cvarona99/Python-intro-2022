#include <stdio.h>
#include <cs50.h>

int main()
{
    int slices = 20;
    int *p = &slices;

    printf("Slices: %i\n", slices);
    printf("Slices through pointer): %i\n", *p);

    slices = 21;

    printf("Slices: %i\n", slices);
    printf("Slices through pointer): %i\n", *p);

    *p = 25;

    printf("Slices: %i\n", slices);
    printf("Slices through pointer): %i\n", *p);

    return 0;
}