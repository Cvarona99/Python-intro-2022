#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{

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
    int counter, bytesRead = 0;
    char filename[8];
    FILE *img = NULL;


    while (fread(buffer, /*1*/sizeof(BYTE), 512, f) == 512)
    {
        if (buffer[0] == 0xff && buffer [1] == 0xd8 && buffer[2] == 0xff && ((buffer[3] & 0xf0) == 0xe0))
        {
            // If first
            if(counter == 0)
            {
                // Create new JPEG
                sprintf(filename, "%03i.jpg", counter);
                img = fopen(filename, "w");
                fwrite(buffer, sizeof(BYTE), bytesRead, img);
                counter++;
            }

            else
            {
                // close file and open a new JPEG
                fclose(filename);
                sprintf(filename, "%03i.jpg", count);
                img = fopen(filename, "w");
                fwrite(buffer, sizeof(BYTE), bytesRead, img);
                counter++;
            }

            else if(counter !=)
            {
                fwrite(buffer, sizeOf(BYTE), bytesRead, img);
                if(bytesRead == 0)
                {
                    fclose(img);
                    fclose(f);
                    break;
                }

            }
        }
    }


fclose(img);
fclose(f);


}
