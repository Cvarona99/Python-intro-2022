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
            float red = image[i][j].rgbtRED;
            float green = image[i][j].rgbtGREEN;
            float 

            average  = (BYTE rgbtRED +  BYTE rgbtGREEN +  BYTE rgbtBLUE) / 3;

        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
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
