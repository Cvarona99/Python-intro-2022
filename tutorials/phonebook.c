#include <cs50.h>
#include <stdio.h>


int main()
{
    string name = get_string ("What is your name?: \n");

    int age = get_int ("What is your age?: \n");
    string number = get_string ("What is your number?: \n");



    printf("%s\n", name);
    printf("%i\n", age);
    printf("%s\n", number);




}