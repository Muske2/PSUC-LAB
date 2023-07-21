#include<stdio.h>
void main()
{
    int n,i,j,m,sum,rem1,rem2;
    printf("Enter n= ");
    scanf("%d",&n);
    for(i=n;i>=1;i--);
    {
        j=2;
        do
        {
            rem1=i%j;
            j=j+1;
        }
        while(rem1!=0 && j<i);
        if(rem1!=0 || i==2)
        {
            printf("%d\t",i);
        }
    }
}
