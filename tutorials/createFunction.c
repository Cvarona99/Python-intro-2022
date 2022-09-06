// This code calculates the factorial of a number

#include <stdio.h>
#include <cs50.h>

int main()
{

    int n = 5;
    int factorial = 1;

    for (int i = n; i > 1; i--)
    {

        factorial *= i;
        // factorial = factorial * i

    }

    printf("The factorial of %i is %i\n", n, factorial);



    return 0;

}