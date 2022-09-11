#include <cs50.h>
#include <stdio.h>
// Create a program that prints the first ten natural numbers and
int main()
{
    int numbers = 0;
    int sum = 0;
    for (numbers = 1; numbers <= 10; numbers++)
    {
        // 0+1 = 1 , now 1 +2 = 3, now 3+3  6...
        sum+= numbers;
        
        printf("%i ", numbers);
        printf("%i ", sum);
    }
    printf("\n");


    printf("%i\n", sum);
}