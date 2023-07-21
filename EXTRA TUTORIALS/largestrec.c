#include<stdio.h>
int large(int a[],int n)
{
    static int i=0;
    static int b=-999;
    if(i==n)
    {
        return b;
    }
    else
    {
       if(b<a[i])
       {
           b=a[i];
       }
        i++;
        large(a,n);
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
    printf("%d",large(a,n));
}
