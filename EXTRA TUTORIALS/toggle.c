#include<stdio.h>
#include<strings.h>
char toggle(char a[])
{
    int i,n;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
}
void main()
{
    char a[50],b;
    printf("Enter string= ");
    gets(a);
    b=toggle(a);
}
