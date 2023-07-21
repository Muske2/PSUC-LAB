#include<stdio.h>
void main()
{
    int a[50],small,i,j,n,pos;
    printf("Enter number of elements= ");
    scanf("%d",&n);
    printf("Enter elements= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        pos=i;small=a[i];
        for(j=i+1;j<n;j++)
        {
            if(small>a[j])
            {
                pos=j;
                small=a[j];
            }
        }
        a[pos]=a[i];
        a[i]=small;
    }
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
