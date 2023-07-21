#include<stdio.h>
void main()
{
    int a[50],n,i,large,small;
    printf("Enter number of elements= ");
    scanf("%d",&n);
    printf("Enter element= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    small=a[i];
    large=a[i+1];
    for(i=0;i<n;i++)
    {
           if(small>a[i])
           {
               small=a[i];
           }
           if(large<a[i])
           {
               large=a[i];
           }
    }
    printf("small=%d\nlarge=%d",small,large);
}
