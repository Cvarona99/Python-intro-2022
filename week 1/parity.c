#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n= get_int("n: ");
    //If f is even
    if(n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}