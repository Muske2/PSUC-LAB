#include<stdio.h>
int array_sum(int a[],int n)
{
    int i,sum;
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return(sum);
}
void main()
{
    int i,a[50],sum,n;
    printf("Enter number of elements= ");
    scanf("%d",&n);
    printf("Enter elements= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=array_sum(a,n);
    printf("Sum= %d",sum);
}
