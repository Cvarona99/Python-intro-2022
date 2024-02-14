#include <stdio.h>
#include <stdlib.h>

struct sPerson
{
    int age;
    struct sPerson* nextInLine;
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
        printf("value NULL\n");
    }
    else
    {
        printf("%s: age:%d address:%p nextInLine:%p\n", comment,
        person->age, person, person->nextInLine);
    }

}

int main(void)
{
    // Dynamic allocation of memory - allocation of memory only as needed
    struct sPerson* first = NULL;
    struct sPerson* second = NULL;

    printPerson(first, "first");
    printPerson(second, "second");

    first = getNewPerson(125);
    second = getNewPerson(100);

    printPerson(first, "first");
    printPerson(second, "second");

    free(first);
    free(second);

    first = NULL;
    second = NULL;


}