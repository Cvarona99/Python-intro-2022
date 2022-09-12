#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main( void)
{
    double amount = get_double ("Dollar amount: ");
    int pennies = amount *100;
    printf("Pennies: %i\n", pennies);
}