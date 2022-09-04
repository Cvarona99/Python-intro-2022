#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points= get_int("How many points did you lose? ");
   const int MINE= 2;
    if (points < MINE )
    {
        printf("You lost fewer than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more than me.\n");
    }
    else
    {
        printf("You lost the same as me.\n");
    }
}