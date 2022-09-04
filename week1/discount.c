#include <cs50.h>
#include <stdio.h>

float discount(float price);

{
    float regular = get_float("Regular Price: ");
    float sale = discount(regular);
    printf("Sale Price: %.2f\n", sale);
}

float discount(float price)
{
    return price*. 85;
}