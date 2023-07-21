#include<stdio.h>
void main()
{
    int a[50],n,i,ele,pos;
    printf("Enter number of elements in array= ");
    scanf("%d",&n);
    printf("Enter elements= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to be deleted= ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
       if(a[i]==ele)
       {
           i=pos;
       }
    }
    for(i=pos;i<n;i++)
           {
               a[i]=a[i-1];
           }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
