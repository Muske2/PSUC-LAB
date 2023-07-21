#include<stdio.h>
void main()
{
    int n,k,i,j;
    printf("Enter values of n and k= ");
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",j*i);
        }
        printf("\n");
    }
}
