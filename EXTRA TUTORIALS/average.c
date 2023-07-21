#include<stdio.h>
void main()
{
    int a[50],n,i;
    float avg,sum;
    printf("Enter number of elements in array= ");
    scanf("%d",&n);
    printf("Enter elements in array= ");
    sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("Average= %.2f",avg);
}
