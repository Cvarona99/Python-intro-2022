#include <stdio.h>
#include <cs50.h>

int main()
{
    int slices = get_int("How many slices of pizaz did you eat?\n");

    printf("Number of slices: %i\n", slices);

    int calPerSlice = 250;

    switch(slices)
    {
        case 1:
            printf("You did a great job!\n");
            break;
        case 2:
            printf("You did an ok job!\n");
            break;
        case 3:
            printf("You did a bad job! Eat 2 next time\n");
            break;
        case 4:
            printf("You're a sad, sad man\n");
            break;
        default:
            printf("You might as well be dead\n");
            break;
    }
    printf("You had %i calories\n", calPerSlice * slices );


    return 0;
}