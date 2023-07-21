#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,n,a[50][50];
    printf("Enter order of matrix= ");
    scanf("%d",&n);
    printf("Enter elements= ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                printf("NO.");
                exit(0);
            }
        }
    }
    printf("YES.");
}
