#include<cs50.h>
#include<stdio.h>

int main(void)
{
    //prompt for x and Y 
    int x = get_int("x: ");
    int y = get_int("y: ");
    int z = x+y;
    printf("%i\n", z);

}