#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the largest.",a);
        }
        if (c>b)
        {
            printf("%d is the largest.", c);
        }

    }
    else
        {
            printf("%d is the largest.", b);
        }

    return 0;
}
