#include<stdio.h>
int sum(int n)
{
    int s;
    if(n/10==0)
    {
        return n%10;
    }
    else
    {
        s=(n%10)+sum(n/10);
    }
}
void main()
{
    int n;
    printf("enter number=");
    scanf("%d",&n);
    printf("%d",sum(n));
}
