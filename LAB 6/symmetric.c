#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[50][50],r,c,i,j;
    printf("Enter number of rows and columns in matrix= ");
    scanf("%d%d",&r,&c);
    if(r!=c)
    {
         printf("The matrix is not square.");
    }
    else
    {
        printf("Enter elements= ");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[j][i]!=a[i][j])
                {
                   printf("It is not a symmetric matrix.");
                   getch();
                   exit(0);
                }
            }
        }
        printf("It is a symmetric matrix.");
    }
}
