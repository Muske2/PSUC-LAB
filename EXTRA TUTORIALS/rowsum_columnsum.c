#include<stdio.h>
void main()
{
    int a[50][50],i,j,r,c,rsum,csum;
    printf("Enter number of rows and columns= ");
    scanf("%d%d",&r,&c);
    printf("Enter elements of matrix= ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        rsum=0;
        for(j=0;j<c;j++)
        {
            rsum=rsum+a[i][j];
        }
        a[i][c]=rsum;
    }
   for(i=0;i<r;i++)
   {
       for(j=0;j<=c;j++)
       {
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
   for(j=0;j<c;j++)
    {
        csum=0;
        for(i=0;i<r;i++)
        {
            csum=csum+a[i][j];
        }
        a[r][j]=csum;
    }
   for(j=0;j<c;j++)
   {
       printf("%d\t",a[r][j]);
   }
}
