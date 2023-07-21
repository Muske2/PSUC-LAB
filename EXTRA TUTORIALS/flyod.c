#include<stdio.h>
int fl(int n)
{
    int i,j,k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d\t",k);
            k++;
        }
        printf("\n");
    }
    return(0);
}
void main()
{
    int n,f;
    printf("Enter n= ");
    scanf("%d",&n);
    f=fl(n);
}
