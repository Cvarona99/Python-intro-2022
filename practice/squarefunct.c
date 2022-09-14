#include <stdio.h>

double square( double number)
int main()
{
    int num = get_int("input any number and it will be squared.");
    double squared = square(num);
    printf("The square root of %i is %i\n", num, squared);
}

double square( double number)
{
    double square = number * number;
    return square;
}