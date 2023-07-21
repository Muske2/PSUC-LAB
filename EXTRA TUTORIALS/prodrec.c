#include<stdio.h>
int prod(int a, int b)
{
    static int p=0;
    if(b>a)
    {
        return(prod(b,a));
    }
    if(b==0)
    {
        return p;
    }
    else
    {
        p=p+a;
        return(prod(a,b-1));
    }
}
void main()
{
    int a,b;
    printf("Enter two numbers= ");
    scanf("%d%d",&a,&b);
    printf("product=%d",prod(a,b));
}
