#include <stdio.h>


int factorial(int number);

int main(void)
{
    int number = 5;
    int factorial = 1;

    printf("factorial: %i\n", factorial);
}


int factorial(int number)
{
    int factorial = 1;

    for (int i = number; i > 1; i--)
    {
        //factorial = factorial * i
        factorial *= i;

    }
    return factorial;
}