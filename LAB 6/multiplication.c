#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
    printf("Enter number of rows and columns in matrix A= ");
    scanf("%d%d",&r1,&c1);
    printf("Enter elements of matrix A= ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter number of rows and columns in matrix B= ");
    scanf("%d%d",&r2,&c2);
    printf("Enter elements of matrix B= ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(c1!=r2)
    {
        printf("Not Multiplicable.");
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                   c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
}
