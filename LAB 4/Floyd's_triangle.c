#include <stdio.h>
void main()
{
    int n,m;
    printf("Input= ");
    scanf("%d",&n);
    m=0;
    for(int i=1;i<=n;i++)
    {
         for(int j=1;j<=i;j++)
         {
             m=m+1;
             printf("%d\t",m);
         }
         printf("\n");
    }


}
