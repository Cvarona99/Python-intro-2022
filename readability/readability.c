#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters (string text);
int count_words (string text);
int count_sentences (string text);



int main(void)
{
    string text;
    float index;
    int letters = 0;
    int sentences = 0;
    int words = 0;






    text = get_string("Text: ");


    float L = (float) letters / (float) words *100;
    float S = (float) sentences / (float) words *100;

     index = round(0.0588 * L - 0.296 * S - 15.8);
}

int count_letters (string text)
{
    int counter = 0;
    int length = strlen(text);

    for (int i = 0; i < length; i++)
    {
        counter++
    }

// monke 




}





