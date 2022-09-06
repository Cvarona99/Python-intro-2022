// This code calculates the factorial of a number

#include <stdio.h>
#include <cs50.h>

int factorial(int number);

int main()
{

    int n = get_int ("What is the number\n");
    int factorial = 1;

    for (int i = n; i > 1; i--)
    {

        factorial *= i;
        // factorial = factorial * i

    }

    printf("The factorial of %i is %i\n", n, factorial);



    return 0;

}

int factorial(int number)
{
    int factorial = 1;
    

}