#include<stdio.h>
void main()
{
    int i,j,r,c,a[50][50];
    printf("Enter number of rows and columns in matrix= ");
    scanf("%d%d",&r,&c);
    printf("Enter elements= ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix:\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Inside elements:\n");
    for(i=1;i<r-1;i++)
    {
        for(j=1;j<c-1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Boundary elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(i==0 || j==0 || i==r-1 || j==c-1)
           {
               printf("%d\t",a[i][j]);
           }
           else
           {
               printf(" \t");
           }
        }
        printf("\n");
    }
}

