#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{

    int letters = 0;
    int words = 1;
    int sentences = 0;

    string text = get_string("Text: ");
    for (int i=0; i < strlen(text); i++)
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
    }
    float L = letters / words *100;
    float S = sentences / words *100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);
}
