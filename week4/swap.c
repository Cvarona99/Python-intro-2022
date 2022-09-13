#include <stdio.h>

void swap(int *a,  int *b);
int main(void)
{
    int x = 2;
    int y = 1;


    printf(" x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf(" x is %i, y is %i\n", x, y);
}
void swap(int *a,  int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}