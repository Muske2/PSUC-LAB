#include<stdio.h>
int anagram(char a[],char b[])
{
    int i,j,m,n,p;
    m=strlen(b);
    n=strlen(a);
    if(m==n)
    {
        p=0;
         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                 if(a[i]==b[j])
                 {
                     p=p+1;
                     break;
                 }
             }
         }
          if(p==n)
    {
        return(1);
    }
    }
    else{return(0);}
}
void main()
{
    char a[50],b[50];
    printf("Enter string 1= ");
    gets(a);
     printf("Enter string 2= ");
    gets(b);
    if(anagram(a,b)==1)
    {
        printf("It is an Anagram.");
    }
    else
    {
        printf("It is not an Anagram.");
    }
}
