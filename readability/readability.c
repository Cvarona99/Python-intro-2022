#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters (string text);
int count_sentences (string text);
int count_words (string text);



int main(void)
{

    int letters = count_letters;
    int words = 1;
    int sentences = 0;

    string text = get_string("Text: ");

/*    for (int i=0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '.' || '?' || '!')
        {
            sentences++;
        }
    } */

    float L = (float) letters / (float) words *100;
    float S = (float) sentences / (float) words *100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1");
    }

    else if (index > 16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("Grade %i", index);
    }
}

int count_letters (string text)
{
    int counter = 0, length 
    int length = strlen(text);
}
