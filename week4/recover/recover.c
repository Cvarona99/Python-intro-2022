#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *f = fopen(argv[1], "r");
    if (!f)
    {
        printf("Invalid file\n");
        return 1;
    }

}
