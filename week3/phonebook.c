#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    string names[] = {"Carter", "David"};
    string numbers[] = {"1-617-495-1000", "1-949-468-2750"};

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "David") == 0)
        {
            print("Found!\n", numbers[i]);
            return 0;
        }
    }
    print("Not found\n")
    return 1;
}