#include<stdio.h>
void main()
{
    int n,x,i,prm,cmp;
    prm=0;
    cmp=0;
    do
    {
        i=2;
        printf("Enter number= ");
        scanf("%d",&n);

        do
    {
      x=n%i;
      i=i+1;
    }
    while(x!=0 && i<n);
      if(x==0 && n!=2 && n!=0)
      {
        cmp=cmp+1;
      }
      if(x!=0 && n!=1)
      {
          prm=prm+1;
      }
      if(n==2)
      {
          prm=prm+1;
      }
    }
    while(n!=-1);
    printf("Number of prime numbers entered= %d\n Number of composite numbers entered= %d",prm-1,cmp);

    }
