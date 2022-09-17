#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *list = malloc(3 * sizeof(int));
  if (list == NULL)
    return 1;


list [0] = 1;
list [1] = 2;
list [2] = 3;

// Time passes and you want to add to array dynamically

int *tmp = malloc(4 * sizeof(int));
if (tmp == NULL)
return 2;

for (int i = 0; i < 4; i++)
{
    tmp[i] = list[i];
}

tmp[3] = 4;


}


