#include<stdio.h>
int sort(int a[],int n)
{
    static int x=0;
    x=x+1;
    int temp,i;
    if(n==1)
    {
        return a;
    }
    else
    {
        for(i=x+1;i<n;i++)
        {
            if(a[x]>a[i])
            {
                temp=a[i];
                a[i]=a[x];
                a[x]=a[i];
            }
        }
        return(sort(a,n));
    }
}
void main()
{

}
