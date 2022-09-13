#include <stdio.h>

void printArray(int arr[], int size);
int main (void)
{
    int slicesEachMeal[] = {4, 5, 4, 6, 3, 2,};
    printArray(sliceseachMeal, 6);
}


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i \n",  arr[i]);
    }
}