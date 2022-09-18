#include <stdio.h>
#include <stdlib.h>

struct sPerson
{
    int age;
}
sPerson;

struct sPerson* getNewPerson(const int age)
{

    struct sPerson* newPerson = NULL;
    newPerson = malloc(sizeof(struct sPerson));
    newPerson->age = age;
    printf("Created new person at %p\n", newPerson);
    return newPerson;
}

void printPerson(const struct sPerson* person, const char* comment)
{
    if (person == NULL)
    {
        return 1; 
    }

}

int main(void)
{

    // Dynamic allocation of memory - allocation of memory only as needed


}