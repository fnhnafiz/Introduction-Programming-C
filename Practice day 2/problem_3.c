#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++ )
  {
    // printf("%d\n", i);
    if ( i % 5 == 0 )
    {
        printf("%d yes\n", i);
    }
    else
    {
        printf("%d no\n", i);
    }
  }
}