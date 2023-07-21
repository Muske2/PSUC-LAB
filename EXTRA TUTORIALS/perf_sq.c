#include<stdio.h>
void main()
{
    int n,i,x,a,b;
    printf("Enter number= ");
    scanf("%d",&n);
    i=1;
        do
        {
            x=i*i;
            b=x;
            a=(i-1)*(i-1);
            i=i+1;
        }
        while(x<n);
            if(x==n)
            {
                printf("It is a perfect square.");
            }
            if(x!=n)
            {
                if(n-a<b-n)
        {
            printf("Nearest perfect square= %d",a);
        }
        else
        {
            printf("Nearest perfect square= %d",b);
        }
            }
}

