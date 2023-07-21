#include<stdio.h>
void main()
{
    int a,b,i,j,sum1,sum2;
    float r1,r2;
    printf("Enter 2 numbers= ");
    scanf("%d%d",&a,&b);
    sum1=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            sum1=sum1+i;
        }
    }
    sum2=0;
    for(j=1;j<=b;j++)
    {
        if(b%j==0)
        {
            sum2=sum2+j;
        }
    }
    r1=sum1/a;
    r2=sum2/b;
    if(r1==r2)
    {
        printf("FRIENDLY.");
    }
    else
    {
        printf("NOT FRIENDLY.");
    }
}
