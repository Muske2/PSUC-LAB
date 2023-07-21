#include<stdio.h>
void main()
{
    int a[50],n,i,pos,ele;
    printf("Enter number of elements= ");
    scanf("%d",&n);
    printf("Enter elements= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position and element to be entered= ");
    scanf("%d%d",&pos,&ele);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
}
