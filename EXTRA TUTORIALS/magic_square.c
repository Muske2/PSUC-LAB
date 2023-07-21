#include<stdio.h>
void main()
{
    int a[50][50],i,j,r,c,pd,n,d;
    printf("Enter order of matrix= ");
    scanf("%d",&n);
    printf("Enter numbers= ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    pd=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>n*n)
            {
                printf("It is not a magic square since matrix has a number greater than %d",n*n);
                exit(0);
            }
            if(i==j)
            {
                pd=pd+a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        r=0;
        for(j=0;j<n;j++)
        {
            r=r+a[i][j];
        }

        if(r!=pd)
        {
            printf("It is not a magic square.");
            exit(0);
        }
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            c=c+a[j][i];
        }

        if(c!=pd)
        {
             printf("It is not a magic square.");
            exit(0);
        }
    }
     d=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            d=d+a[i][n-1-j];
            break;
        }
    }
    if(d!=pd)
        {
             printf("It is not a magic square.");
            exit(0);
        }
    printf("It is a magic square.");
}
