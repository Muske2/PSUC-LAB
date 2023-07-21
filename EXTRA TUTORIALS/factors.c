#include<stdio.h>
void main()
{

    int n,x,i;
    printf("Enter a number= ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
         x=n%i;
         if(x==0)
         {
             printf("%d\t",i);
         }
    }

}

