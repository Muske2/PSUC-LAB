#include<stdio.h>
void main()
{
    int n,x,sum,num;
    printf("Enter number= ");
    scanf("%d",&n);
    num=n;
    sum=0;
    while(n>0)
    {
        x=n%10;
          sum=(sum*10) +x;
        n=n/10;
    }
    if(sum==num)
    {
        printf("PALINDROME.");
    }
    else
    {
        printf("NOT PALINDROME.");
    }
}
