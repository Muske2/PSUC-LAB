#include<stdio.h>
int Largest(int n, int a[])
{
    int i=0;
    int large=a[0];
    for(i=0;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
    return(large);
}
void main()
{
    int large,n,i,a[50];
    printf("Enter number of elements= ");
    scanf("%d",&n);
    printf("Enter numbers= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=Largest(n,a);
    printf("Largest=%d",large);
}
