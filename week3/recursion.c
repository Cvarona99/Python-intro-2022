#include <cs50.h>
#include <stdio.h>

void draw(int n);
int main()
{
    int height = get_int("Height: ");


    draw(height);
}

void draw(int n)
{

    draw(n - 1)


}