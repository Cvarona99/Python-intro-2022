#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dynamically allocate array of size 3
  int *list = malloc(3 * sizeof(int));
  if (list == NULL)
    return 1;

// Assign 3 numbers to that array
list [0] = 1;
list [1] = 2;
list [2] = 3;

// Time passes and you want to add to array dynamically


// Allocate new array of size 4
int *tmp = malloc(4 * sizeof(int));
if (tmp == NULL)
return 2;


// Copy numbers from old array int new array
for (int i = 0; i < 3; i++)
{
    tmp[i] = list[i];
}

// Add fourth number to new array
tmp[3] = 4;

// Free old array
free(list);

list = tmp;

for (int i = 0; i < 4; i++)
{
    printf("%i\n", list[i]);
}
return 0;

free(tmp);
free(list);
}


