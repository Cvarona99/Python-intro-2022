#include <cs50.h>
#include <stdio.h>

int main()
{
    int numbers = 0;

    for (numbers = 1; numbers <= 10; numbers++)
    {
        printf("%i\n", numbers);
    }

    int sum = 0;
    sum+= numbers;

    printf("%i\n", sum);
}