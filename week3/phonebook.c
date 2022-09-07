#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;


int main()
{
    person people[2];
    people[0].name = "Carter";
    people[0].number = "803-995-9208";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            print("Found!\n", numbers[i]);
            return 0;
        }
    }
    print("Not found\n")
    return 1;
}