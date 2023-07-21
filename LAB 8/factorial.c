#include<stdio.h>
int fact(int a)
{
    int fact,i;
    fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return(fact);
}
void main()
{
    int n,r,ncr;
    printf("Enter values of n and r= ");
    scanf("%d%d",&n,&r);
    ncr=fact(n)/(fact(n-r)*fact(r));
    printf("nCr value=%d",ncr);
}
