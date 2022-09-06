// This code calculates the factorial of a number

#include <stdio.h>
#include <cs50.h>

int factorial(int number);

int main()
{
    int fact = factorial(5);
    printf("%i /n", fact);
    return 0;

}

int factorial(int number)
{
    int factorial = 1;

    for (int i = n; i > 1; i--)
    {

        factorial *= i;
        // factorial = factorial * i

    }

    return factorial;


}