#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int firstDigit = n / 10;
    int lastDigit = n % 10;
    if (lastDigit == 0)
    {
        printf("YES");
    }
    else
    {
        if (firstDigit % lastDigit == 0 || lastDigit % firstDigit == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}