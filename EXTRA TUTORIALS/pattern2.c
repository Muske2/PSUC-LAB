#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("Enter number of rows= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<1+i;j++)
        {
            printf(" ");
        }
        for(k=0;k<n-i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
