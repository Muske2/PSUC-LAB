#include<stdio.h>
int sum(int n)
{
    if(n>0)
    {
        return((n%10)+sum(n/10));
    }
    else
    {
        return(0);
    }
}

void main()
{
    int n;
    printf("number= ");
    scanf("%d",&n);
    printf("sum=%d",sum(n));
}
