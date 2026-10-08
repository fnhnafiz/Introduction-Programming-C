#include<stdio.h>
int main()
{
    for(int i = 1; i <= 20;i++)
    {
        if( i == 5 || i == 17){
            printf("This value is unavailabe!!\n");
            continue;
        }
      
        printf("%d\n", i);
    }
}