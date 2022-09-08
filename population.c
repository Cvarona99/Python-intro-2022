#include <stdio.h>
#include <cs50.h>

int main()
{
    //prompting user for a starting # of llamas
int n;
do
{
     n = get_int("Number of llamas: \n");
}
while (n < 9);




  //prompting for an ending # of llamas
  int end;
do
{
     end = get_int("Ending population size: \n")
}
while (end < n);







}
