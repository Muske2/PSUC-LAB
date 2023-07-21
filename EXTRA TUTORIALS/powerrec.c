#include<stdio.h>
int pow(int a,int b)
{
    int x;
    if(b==0)
    {
        return 1;
    }
    else
    {
        x=a*pow(a,b-1);
    }
    return x;
}
void main()
{
   int a,b;
    printf("Enter two numbers= ");
    scanf("%d%d",&a,&b);
    printf("%d",pow(a,b));
}
