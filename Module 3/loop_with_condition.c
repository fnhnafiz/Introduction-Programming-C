#include<stdio.h>
int main ()
{
    for(int a = 1; a <=20; a++)
    {
        if (a % 2 ==0)
        {
            printf("%d --number is even\n", a);
        }
        else
        {

            printf("%d -- number is odd\n", a);
        }
    }
}