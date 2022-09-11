#include <stdio.h>
#include <cs50.h>

int main()
{
    int n = get_int("How many natural numbers?: ");
    int i;
    int sum = 0;
    printf("The first %i natural numbers are: \n", n);

    for  (i = 1; i <= n; i++)
    {
        sum += i;
        printf("%i ", i);

    }
    printf("\n");
    printf("Sumbody once told me: %i\n", sum);




}