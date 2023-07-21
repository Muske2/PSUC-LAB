#include<stdio.h>
void main()
{
    int a[50][50],i,j,r,c,r1,r2,c1,c2,temp;
    printf("Enter number of rows and columns in matrix= ");
    scanf("%d%d",&r,&c);
    printf("Enter elements of matrix= ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter two rows to be exchanged= ");
    scanf("%d%d",&r1,&r2);
    for(j=0;j<c;j++)
    {
        temp=a[r1-1][j];
        a[r1-1][j]=a[r2-1][j];
        a[r2-1][j]=temp;
    }
    printf("Matrix after interchanging two rows= \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("Enter two columns to be exchanged= ");
    scanf("%d%d",&c1,&c2);
    for(i=0;i<r;i++)
    {
        temp=a[i][c1-1];
        a[i][c1-1]=a[i][c2-1];
        a[i][c2-1]=temp;
    }
     printf("Matrix after interchanging two columns= \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
