#include <stdio.h>
#include <cs50.h>

int main()
{
    int i, n, sum = 0;

    float avg;


    printf("input 10 numbers: \n");
    for (int i = 0; i<10; i++)
    {

        n = get_int("Number _ %i : ", i);
        sum+= n;
    }
    avg = (float)sum / 10.0;

    printf("The sum is %i\nThe Average is %f\n)



}