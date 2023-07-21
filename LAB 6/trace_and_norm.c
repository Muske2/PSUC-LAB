#include<stdio.h>
#include<math.h>
void main()
{
    int a[50][50],t,n,r,c,i,j;
    float norm;
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
    n=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            n=n+(a[i][j]*a[i][j]);
        }
    }
    norm=sqrt(n);
    if(r!=c)
    {
        printf("It is not a square matrix.\n Norm= %.2f",norm);
    }
    else
    {
        t=0;
        printf("It is a square matrix.\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j)
                {
                   t=t+a[i][j];
                }
            }
        }
        printf("Trace= %d\n Norm=%.2f",t,norm);
    }

}
