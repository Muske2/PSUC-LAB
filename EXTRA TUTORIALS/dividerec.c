#include<stdio.h>
int div(int a,int b)
{
    int d=0;
    if(a<b)
        {return d;}
    else
    {
      d=1+div(a-b,b);
    }
}
void main()
{
    int a,b;
    printf("Enter two numbers= ");
    scanf("%d%d",&a,&b);
    printf("%d",div(a,b));
}
