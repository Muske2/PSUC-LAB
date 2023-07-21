#include<stdio.h>
int sort(int a[],int n)
{
    int small,temp,i;
    small=a[0];
    if(n==1)
    {
        return 0;
    }
    else
    {
        for(i=1;i<n;i++)
    {
        if(small>a[i])
        {
            temp=a[i-1];
            a[i-1]=a[i];
            a[i]=temp;
            small=a[i];
        }
    }
    return(sort(a,n-1));
    }
}
void main()
{
     int n,a[50],i;
    printf("Enter number of terms= ");
    scanf("%d",&n);
    printf("Enter terms= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
