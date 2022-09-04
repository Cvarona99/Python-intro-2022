#include<cs50.h>
#include<stdio.h>

int main(void)
{
    //prompt for x and Y
    float x = get_float("x: ");
    float y = get_float("y: ");

    //Divide x by y
    float z = x / y;

    //perform
    printf(" = %.2f\n", z);

}