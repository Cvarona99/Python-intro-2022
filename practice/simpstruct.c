#include <stdio.h>


int main()
{
    int total;
    total = sum(5, 6);
    printf("total : %i\n", total);

}

int sum(int a, int b)
{
    int add;
    add = a + b;
    return add;
}