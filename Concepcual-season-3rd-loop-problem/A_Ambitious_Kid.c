#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int minVal = INT_MAX; 
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x < 0)
        {
            x = x * (-1);
        }
        if (x < minVal)
        {
            minVal = x;
        }
    }
    printf("%d", minVal);
    return 0;
}