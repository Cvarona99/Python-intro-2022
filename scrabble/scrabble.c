#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if(score 1 > score 2)
    {
        printf("Player 1 Wins!");
    }

    else if(score 2 > score 1)
    {
        printf("Player 2 Wins!");
    }

    else
    {
        printf("Tie!");
    }

}

int compute_score(string word)
{
    // Compute and return score for string
    int score = 0;
    //1.Initial  2.conditional 3. Increment by 1 for each iteration


    for( i = 0; i < strlen(word); i++)
    {
        if (isupper(word[i]))
        {
           score = score + POINTS[word[i] - 65]
        }
        if (islower(word[i]))
        {
           score = score+ POINTS[word[i] - 97]
        }
    }
    return score;
}

