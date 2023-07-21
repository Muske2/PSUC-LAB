#include<stdio.h>
void main()
{
    const int MAX=100;
    char a[MAX];
    int i,n,flag=0;
    printf("Enter string: ");
    scanf("%s",a);
    n=0;
    for(i=0;a[i]!='\0';i++)
    {
        n=n+1;
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=a[n-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is a palindrome.");
    }
    else
    {
        printf("It is a not a palindrome.");
    }
}
