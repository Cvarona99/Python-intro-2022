#include <stdio.h>


int main()
{
    int size = 5;
    int myGrades[size];
    myGrades[0] = 10;
    myGrades[1] = 15;
    myGrades[2] = 20;
    myGrades[3] = 25;
    myGrades[4] = 30;

for (int i =0; i< size; i++)
{
    printf("%i\n", myGrades[i]);
}


    return 0;

}
