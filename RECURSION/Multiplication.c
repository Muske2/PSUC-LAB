#include<stdio.h>
int mtx(int a,int b)
{
    if(a<b)
    {
        return(mtx(b,a));
    }
    if(b==0)
    {
        return(0);
    }
    else if(b>0)
    {
       return(a+mtx(a,b-1));
    }
}
void main()
{
    int a,b;
    printf("numbers= ");
    scanf("%d%d",&a,&b);
    printf("product=%d",mtx(a,b));
}
