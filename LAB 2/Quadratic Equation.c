//Compute all the roots of a quadratic equation using switch case statement.
#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,D,root1,root2,re,im;
    int k;
    printf("Enter A= ");
    scanf("%f", &a);
    printf("Enter B= ");
    scanf("%f", &b);
    printf("Enter C= ");
    scanf("%f", &c);
    D=pow(b,2)-4*a*c;
    if(a!=0)
    {
        if(D<0)
        {
            k=1;
        }
        if(D==0)
        {
            k=2;
        }
        if(D>0)
        {
            k=3;
        }
        switch(k)
        {
        case(1):
            printf("The roots are imaginary/complex.\n");
            re= -b/(2*a);
            im= pow(fabs(D),0.5)/(2*a);
            printf("Root1= %.3f+%.3fi\n", re,im);
            printf("Root2= %.3f-%.3fi", re,im);
            break;
        case(2):
            printf("The roots are real and equal.\n");
            root1=(-b+sqrt(D))/(2*a);
            printf("Root1=Root2= %f\n", root1);
            break;
        case(3):
            printf("The roots are real and unequal.\n");
            root1=(-b+sqrt(D))/(2*a);
            root2=(-b-sqrt(D))/(2*a);
            printf("Root1= %f\n", root1);
            printf("Root2= %f", root2);
            break;
        }
    }
    else
    {
        printf("The equation is linear.");
    }
}
