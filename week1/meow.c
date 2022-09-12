#include <cs50.h>
#include <stdio.h>
void meow(void);

int main(void)

{
    int n = get_int("How many meows: ");

    for(int i = 0; i < n; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}

