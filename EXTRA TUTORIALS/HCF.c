#include<stdio.h>
void main()
{
    int a,b,hcf,i;
    printf("Enter smaller and larger number= ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("HCF= %d",hcf);
}
