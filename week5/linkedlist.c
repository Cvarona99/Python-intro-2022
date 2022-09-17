#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node* next;
}
node;

int main(void)
{
    // List of size

    node* list = NULL;


// Add number to list
    node* n = malloc(sizeof(node))
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL
// Update list to point to new node
    list = n;

    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list);
        return 2;
    }

    n->number = 2;
    n->next = NULL;
    list->next = n;
    // Add a number to the list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list->next);
        free(list);
        return 3;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    
}