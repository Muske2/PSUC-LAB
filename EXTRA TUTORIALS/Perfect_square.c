#include<stdio.h>
void main()
{
    int n,x,a;
    printf("Enter number= ");
    scanf("%d",&n);
    a=1;
    while(a<n && x!=n)
    {
        x=a*a;
        if(x==n)
        {
            printf("It is a perfect square.");
        }
        else
        {
            a++;
        }
    }
    if(x!=n)
    {
        printf("It is not a perfect square.");
    }
}
