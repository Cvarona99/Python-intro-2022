#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
int main()
{
    int h, m, s;
    int d = 1000; // delay of 1000 milliseconds
    printf("Set Time: \n");
    scanf("%i%i%i", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)
    {
        printf("Invalid time\n");
        return 1;
    }
    while(1) // infinite loop
    {
        s++;
        if(s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }





    }
    printf("Clock: ");
    printf("%02i:%2i:%2i", h, m, s); // Writes time in the format 00:00:00



}