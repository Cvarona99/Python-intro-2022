// Continue is similar to break but instead of terminating, it forces to execute the next iteration of the loop
//program that prints all odd numbers from 1 to 20
#include <cs50.h>
#include <stdio.h>

int main()
{
    int i, n=2;
    for (i = 1; i < 20; i++)
    {
        if(i == n)
        {
            n = n+2;
            continue;
        }
        printf("%i \n", i);
    }
}