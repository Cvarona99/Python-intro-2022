// Implements a dictionary's functionality
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Declare variables
unsigned int wordcount = 0;
unsigned int hash_value;



const unsigned int N = (LENGTH + 1) * 'z';

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int hashvalue = hash(word);
    node *cursor = table[hashvalue];
    while(cursor != NULL)
    {
        if(strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
// MATH USING ALL LETTERS
unsigned int hash(const char *word)
{
    int words = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        words += tolower(word[i]);
    }
    return (words % N);

}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    //! : load dictionary
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        printf("File could not be opened, NULL\n");
        return  false;
    }

    char word[LENGTH + 1];
    while(fscanf(file, "%s", word) != EOF)
    {
        // Allocate memory
        node *n = malloc(sizeof(node));

        if (n == NULL)
        {
            return false;
        }
        // Copy word into node
        strcpy(n->word, word);
        hash_value = hash(word);

        if(table[hash_value] == NULL)
        {
            table[hash_value] = n;
        }
        else
        {
            n->next = table[hash_value];
        }

        table[hash_value] = n;
        wordcount++;
    }
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{

    return wordcount;
}

void freeall(node *n)
{
    if(n->next != NULL)
    {
        freeall(n->next);
    }
    free(n);
}


// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        if(table[i] != NULL)
        {
            freeall(table[i]);
        }
    }
    return true;
}
