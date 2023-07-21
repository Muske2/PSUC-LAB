#include<stdio.h>
int circle(int r)
{
    float a,c,d;
    d=2*r;
    a=3.14*r*r;
    c=2*3.14*r;
    fflush(stdin);
    char ch;
    printf("Enter 'd' for diameter,'a' for area or 'c' for circumference= ");
    scanf("%c",&ch);
    switch(ch)
    {
    case('a'):
        {
            printf("area=%.2f",a);
            break;
        }
    case('d'):
        {
            printf("diameter=%.2f",d);
            break;
        }
    case('c'):
        {
            printf("circumference=%.2f",c);
            break;
        }
    default:
        {
            printf("Invalid input.");
            break;
        }
    }
return(0);
}
void main()
{
    int r,t;
    printf("Enter radius of circle= ");
    scanf("%d",&r);
    t=circle(r);
}
