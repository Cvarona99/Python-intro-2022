// This code calculates the factorial of a number

#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main()
{
    int fact = factorial(5);
    printf("%i ", fact);
    printf("\n");
    return 0;

}

int factorial(int n)
{
    int factorial = 1;

    for (int i = n; i > 1; i--)
    {

        factorial *= i;
        // factorial = factorial * i

    }

    return factorial;


}