#include <stdio.h>


int factorial(int number);

int main(void)
{
   int f = factorial(5);
   printf("%i\n", fact);
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