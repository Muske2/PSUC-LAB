#include<stdio.h>
void main()
{
    int n,i,j;
    printf("n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i+1;j>=1;j--)
        {
            printf("#");
        }
        printf("\n");
    }
}
