#include<stdio.h>
void main()
{
    int a,b,x;
    printf("Enter two limits= ");
    scanf("%d%d",&a,&b);
    int i;
    for(i=2;i<b;i++)
    {
        for(;a<b;a++)
    {
        x=a%i;
        if(x!=0)
        {
            printf("%d\t",a);
        }
    }

    }
}
