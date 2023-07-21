#include<stdio.h>
int gcd(int a,int b)
{
    static int i=1;
    i=i+1;
    static int gcd=1;
    if(a==1 || b==1)
    {
        return gcd;
    }
    else
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
            a=a/i;
            b=b/i;
            return gcd(a,b);
        }
        else
        {
            return(gcd(a,b));
        }
    }
}
void main()
{
    int a,b;
    printf("Enter numbers= ");
    scanf("%d%d",&a,&b);
    printf("GCD=%d",gcd(a,b));
}
