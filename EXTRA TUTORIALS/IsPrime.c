#include<stdio.h>
int IsPrime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0 || n==2)
    {
        return(1);
    }
    else
        {
            return(0);
        }
}
void main()
{
    int n,i,m;
    printf("Enter N= ");
    scanf("%d",&n);
    i=0;
    m=2;
    while(i<n)
    {
        if(IsPrime(m)==1)
        {
            printf("%d\t",m);
            i=i+1;
        }
        m=m+1;
    }
}
