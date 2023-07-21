#include<stdio.h>
void main()
{
    int a,b,rem;
    printf("Enter two limits= ");
    scanf("%d%d",&a,&b);
    int i;
    while(a<=b)
    {
        i=2;
        do
        {
            rem=a%i;
            i=i+1;
        }
        while(i<a && rem!=0);
        if(rem!=0 && a!=1 || a==2)
        {
                   printf("%d\t",a);
        }
       a=a+1;
    }
}
