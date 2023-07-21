#include<stdio.h>
int rev(int num)
{
    static int n=0;
    if(num>0)
    {
        n=(n*10)+(num%10);
         return(rev(num/10));
    }
    else
    {
        return(n);
    }
}
void main()
{
    int num;
    printf("number= ");
    scanf("%d",&num);
    printf("%d",rev(num));
}
