#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=20)
    {
        if(i % 2 ==0)
        {

            printf("%d --even number \n", i);
        }
        else{
            printf("%d -- odd number\n", i);
        }
        i++;
    }
}