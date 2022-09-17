#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
// Open memory card file
    FILE *f = fopen(argv[1], "r");
    if (!f)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    if (f == NULL)
    {
        printf("Invalid file\n");
        return 2;
    }

    typedef uint8_t BYTE;
    BYTE buffer[512];
    int counter = 0;
    char filename[8];
    FILE *img = NULL;

// Repeat until end of the card
// read 512 bytes into a buffer
    while (fread(buffer, sizeof(BYTE), 512, f))
    {
        if (buffer[0] == 0xff && buffer [1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            sprintf(filename, "%03i.jpg", counter);
            img = fopen(filename, "w");
            counter++;
        }
        // New jPEG / already open 
        if (img != NULL)
        {
            fwrite(buffer, sizeof(BYTE), 512, img);
        }
    }
// close all files at the end
    fclose(f);
    fclose(img);
    return 0;
}

