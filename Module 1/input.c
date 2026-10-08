#include <stdio.h>
int main()
{
    int a;
    float flw;
    char ch;

    scanf("%d %f %c", &a, &flw, &ch);
    

    printf("%d\n%.2f\n%c", a, flw, ch);
    return 0;
}