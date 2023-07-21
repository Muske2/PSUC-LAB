#include<stdio.h>
void main()
{
    int n,x,sum,m;
    printf("Enter number= ");
    scanf("%d",&n);
    sum=0;
    m=n;
    while(n>0)
    {
        x=n%10;
        sum=sum+pow(x,3);
        n=n/10;
    }
     if(m==sum)
    {
        printf("It is an Armstrong number.");
    }
    else
    {
        printf("It is not an Armstrong number. ");
    }

}
