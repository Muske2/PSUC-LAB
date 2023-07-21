#include<stdio.h>
void main()
{
    int a[50][50],i,m,j,l1,l2;
    printf("Enter dimension= ");
    scanf("%d",&m);
    printf("Enter elements= ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    l1=a[i][j+1];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(j==i || j<i)
            {
                continue;
            }
            else
            {
                if(a[i][j]>l1)
                {
                    l1=a[i][j];
                }
            }
        }
    }
    printf(" Above=%d\n",l1);
    l2=a[i+1][j];
    for(i=0;i<m;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i][j]>l2)
            {
                l2=a[i][j];
            }
        }
    }
    printf("Below=%d",l2);
}
