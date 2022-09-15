#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    int average;
    for (int i= 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //convert to float value then find average
            float red = image[i][j].rgbtRed;
            float green = image[i][j].rgbtGreen;
            float blue  = image[i][j].rgbtBlue;

            average  = round(red + green + blue) / 3.0;
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;

        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])

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

            int sepiaRed = (.393 * originalRed + .769 * originalGreen + .189 * originalBlue);
            int sepiaGreen = (.349 * originalRed + .686 * originalGreen + .168 * originalBlue);
            int sepiaBlue = (.272 * originalRed + .534 * originalGreen + .131 * originalBlue);

            if (sepiaRed > 255 || sepiaGreen > 255 || sepiaBlue > 255)
            {
                
            }
        }
    }
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
