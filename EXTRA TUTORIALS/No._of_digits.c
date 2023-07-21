#include <stdio.h>
void main()
{

    int n,total;
    printf("Enter number= ");
    scanf("%d", &n);
    while(n>0)
    {
        n=n/10;
        total= total+1;
    }
    printf("Number of digits= %d", total);
}
