#include<stdio.h>
void main()
{
    int a[50],n,i,x,j;
    printf("Enter number of elements= ");
    scanf("%d",&n);
    printf("Enter elements= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
           for(j=2;j<a[i] && (a[i]%j)!=0;j++)
           {
                x=a[i]/j;
                 if((a[i]%j)!=0 && a[i]!=1)
           {

           }

           }

    }

}
