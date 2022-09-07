#include <cs50.h>
#include <stdio.h>

int main()
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    //implementing linear search

    for (int i=0; i< 7; i++)
    {
        if (numbers[i] == 0)
        {
            printf("Found!\n");
            return 0;
        }
        else
        {
            printf("Not found\n");
            return 1;
        }
    }
}