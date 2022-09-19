// Implements a dictionary's functionality
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <strings.h>
#include <stdlib.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Declare variables
unsigned int wordcount;
unsigned int hash_value;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

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
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    //! : load dictionary
    FILE *file = fopen(dictionary, "r");
    if (file != NULL)
    {
        return true;
    }
    else
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
        strcopy(n->word, word);
        hash_value = hash(word);

        if(table[hash_value] == NULL)
        {
            n->next = NULL;
        }
        else
        {
            n->next = table[hash_value];
        }

        table[hash_value] = n;
        wordcount++;
    }
    free(file);
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{

    return wordcount;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
