#include<stdio.h>
void main()
{
    int a,b,c,sml;
    printf("Enter values of A,B and C= ");
    scanf("%d%d%d", &a,&b,&c);
    sml= ( a<b && a<c )? a:
        (b<a && b<c)? b:
             c;
            printf("%d is the smallest.",sml);
}
