#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);



int main(void)
{
    string text;
    float index;
    int letters, words, sentences;








    text = get_string("Text: ");
    letters = count_letters(text);
    sentences = count_sentences(text);
    words = count_words(text);

    printf("%i letters\n", letters);

    printf("%i sentences\n", sentences);

    printf("%i words\n", words);


   float L = (float) letters / (float) words *100;
   float S = (float) sentences / (float) words *100;

   index = round(0.0588 * L - 0.296 * S - 15.8);

   if (index > 16)
   {
    printf ("Grade 16+\n");
   }
   else if (index < 1)
   {
    printf ("Before Grade 1\n");
   }
   else
   {
    printf("Grade %f)
   }
}

int count_letters(string text)
{
    int counter = 0;
    int length = strlen(text);

    for (int i = 0; i < length; i++)
    {
        if(isalpha(text[i]))
        {
            counter++;
        }

    }

    return counter;
}

int count_words(string text)
{
    int counter = 1;
    int length = strlen(text);

    for (int i = 0; i < length; i++)
    {
        if(text[i] == ' ')
        {
            counter++;
        }

    }

    return counter;
}


int count_sentences(string text)
{
   int counter = 0;
   int length = strlen(text);

    for (int i = 0; i < length; i++)
    {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            counter++;
        }


    }

    return counter;
}






