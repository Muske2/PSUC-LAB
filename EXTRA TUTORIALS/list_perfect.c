#include<stdio.h>
int Perfect(int n)
{
    int i,p;
    p=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            p=p+i;
        }
    }
    if(p==n)
    {
        return(1);
    }
    else{return(0);}
}
void main()
{
    int m,n,x;
    printf("Enter lower and higher limit= ");
    scanf("%d%d",&m,&n);
    printf("Perfect numbers= ");
    for(x=m+1;x<n;x++)
    {
        if(Perfect(x)==1)
        {
            printf("%d\t",x);
        }
    }
}
