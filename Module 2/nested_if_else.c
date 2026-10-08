#include<stdio.h>
int main()
{
  int tk;
  scanf("%d", &tk);
  if(tk >= 5000)
  {
    printf("Biriany khaite zabo &\n", tk);
    if(tk >=10000)
    {
        printf("Shoping Korbo....\n");
    }
    else{
        printf("Shoping korbo na....\n");
    }
  }
  else{
    printf("Biriany Khabo na & Shoping o korbo na");
  }
}