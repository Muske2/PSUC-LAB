#include<stdio.h>
void main()
{
    int h,p,b,x;
    printf("Enter values of Hypotenuse, Perpendicular and Base= ");
    scanf("%d%d%d",&h,&p,&b);
    x=p*p+b*b;
    if(x==h*h)
    {
        printf("It is a Pythagorean triplet.");
    }
    else
    {
        printf("It is not a Pythagorean triplet.");
    }
}
