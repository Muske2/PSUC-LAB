#include<stdio.h>
void main()
{
    int a[50][50],i,j,n,temp;
     printf("Enter dimension of matrix= ");
    scanf("%d",&n);
    printf("Enter elements of matrix= ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
       for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                 temp=a[i][j];
            a[i][j]=a[i][n-i-1];
            a[i][n-i-1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    }
