#include<stdio.h>
int rev(int n)
{
    static int r=0;
    if(n>0)
    {
        r=(r*10)+(n%10);
        return(rev(n/10));
    }
    else
    {
         return r;
    }
}
void main()
{
    int n;
    printf("Enter number= ");
    scanf("%d",&n);
    printf("%d",rev(n));
}
