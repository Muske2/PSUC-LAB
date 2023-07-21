#include<stdio.h>
#include<math.h>
void main()
{
    int n,m,count;
    printf("Enter number= ");
    scanf("%d", &n);
    printf("Last digit=%d\n",n%10);
    while(n>0)
    {
        m=n%10;
        n=n/10;
        count= count+1;
    }

    printf("First digit=%d",m);
}
