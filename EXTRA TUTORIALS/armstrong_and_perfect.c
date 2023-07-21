#include<stdio.h>
int armstrong(int n)
{
    int x,a,m;
    a=0;
    m=n;
    while(n>0)
    {
        x=n%10;
        a=a+pow(x,3);
        n=n/10;
    }
    if(m==a)
    {
        return(1);
    }
    else{return(0);}
}
int perfect(int n)
{
   int x,i,p;
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
    int n;
    printf("Enter number= ");
    scanf("%d",&n);
    if(armstrong(n)==1)
    {
        printf("It is an armstrong number.\n");
    }
    else
    {
        printf("It is not an armstrong number.\n");
    }
    if(perfect(n)==1)
    {
        printf("It is a perfect number.\n");
    }
     else
    {
        printf("It is not a perfect number.\n");
    }
}

