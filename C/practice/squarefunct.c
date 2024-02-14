#include <stdio.h>
#include <cs50.h>

double square( double number);
int main()
{
    int num = get_int("input any number and it will be squared: ");
    double squared = square(num);
    printf("The square of %i is %f\n", num, squared);
}

double square( double number)
{
    double square = number * number;
    return square;
}