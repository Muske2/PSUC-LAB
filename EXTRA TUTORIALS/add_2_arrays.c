#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],n,m;
    printf("Enter number of elements in first array= ");
    scanf("%d",&n);
    printf("Enter numbers of first array= ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number of elements in second array= ");
    scanf("%d",&m);
    printf("Enter numbers of second array= ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    if(m==n)
    {
        for(int i=0;i<n;i++)
        {
             c[i]=a[i]+b[i];
              printf("%d\t",c[i]);
        }
    }
    else{printf("cannot add");}

}
