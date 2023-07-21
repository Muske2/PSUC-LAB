#include<stdio.h>
#include<strings.h>
int IsPalin(char a[])
{
    int i,n,flag=1;
    n=strlen(a);
        for(i=0;i<(n/2);i++)
    {
        if(a[i]!=a[n-1-i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
void main()
{
    char a[50];
    printf("Enter string= ");
    gets(a);
   if(IsPalin(a)==1)
   {
       printf("It is a palindrome.");
   }
   else
   {
        printf("It is not a palindrome.");
   }

}
