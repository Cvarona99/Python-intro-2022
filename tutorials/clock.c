#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
int main()
{
    int h, m, s;
    int d = 1000; // delay of 1000 milliseconds
    printf("Set Time: "\n);
    scanf("%i%i%i, &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)\
    {
        printf("Invalid time\n");
        return 1; 
    }



}