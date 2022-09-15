#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    int average;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //convert to float value then find average
            float red = image[i][j].rgbtRed;
            float green = image[i][j].rgbtGreen;
            float blue  = image[i][j].rgbtBlue;

            average  = round((red + green + blue) / 3.0);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;

        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{



    // loop through each row ^^^^^^^
    for (int i = 0; i < height; i++)
    {
        // loop through each column >>>>>>>
        for (int j = 0; j < width; j++ )
        {
            // convert to float value and change value per formula
            float originalRed  = image[i][j].rgbtRed;
            float originalGreen  = image[i][j].rgbtGreen;
            float originalBlue  = image[i][j].rgbtBlue;

            int sepiaRed = round(.393 * originalRed + .769 * originalGreen + .189 * originalBlue);
            int sepiaGreen = round(.349 * originalRed + .686 * originalGreen + .168 * originalBlue);
            int sepiaBlue = round(.272 * originalRed + .534 * originalGreen + .131 * originalBlue);
            // set minumum value to 255
             image[i][j].rgbtRed = fmin(255, sepiaRed);
             image[i][j].rgbtGreen = fmin(255, sepiaGreen);
             image[i][j].rgbtBlue = fmin(255, sepiaBlue);
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    for (int i = 0; i < height; i++)
    {
        int k = 0;
        for (int j = width -1 ; j >= 0; j--, k++)
        {
            temp[i][k] = image[i][j];
        }
    }

    // copy from temp to image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int red, blue, green = 0;
            float counter = 0.00;

            for (int x = -1; x < 2; x++)
            {
                for (int y = -1; y < 2; y++)
                {
                    int 
                }
            }
        }
    }


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];\
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }

    return;
}
