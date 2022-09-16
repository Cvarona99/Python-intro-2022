#include <stdio.h>
#include <stdlib.h>

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

    typedef 

}
