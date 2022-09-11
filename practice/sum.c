#include <cs50.h>
#include <stdio.h>
// Create a program that prints the first ten natural numbers and
int main()
{
    int numbers = 0;
    int sum = 0;
    for (numbers = 1; numbers <= 10; numbers++)
    {

        sum+= numbers;
        printf("%i ", numbers);
        printf("%i ", sum);
    }
    printf("\n");


    printf("%i\n", sum);
}