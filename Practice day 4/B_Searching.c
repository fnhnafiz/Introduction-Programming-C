#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int tnum;
    scanf("%d", &tnum);
    int indexNum = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tnum)
        {
            indexNum = i;
            break;
        }
    }
    printf("%d", indexNum);
    return 0;
}