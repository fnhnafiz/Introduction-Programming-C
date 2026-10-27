#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int minVal = INT_MAX;
    int minIndex;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
            minIndex = i + 1;
        }
    }
    printf("%d %d", minVal, minIndex);
    return 0;
}