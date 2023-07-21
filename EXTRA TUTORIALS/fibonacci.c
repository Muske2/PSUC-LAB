#include<stdio.h>
int fib(int n)
{
    int i,first,sec,third;
    if(n==1)
    {
        printf("0");
    }
    if(n==2)
    {
        printf("0 1");
    }
    if(n>2)
    {
        first=0;sec=1;
        printf("0 1 ");
        for(i=1;i<=(n-2);i++)
        {
            third=first+sec;
            printf("%d ",third);
            first=sec;
            sec=third;
        }
    }
    return(0);
}
void main()
{
    int n,f;
    printf("Enter n= ");
    scanf("%d",&n);
    f=fib(n);
}
