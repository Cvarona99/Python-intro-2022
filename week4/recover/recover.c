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

    while (fread(buffer, 1, BLOCK_SIZE, raw_file) == BLOCK_SIZE)
    {
        
    }

}
