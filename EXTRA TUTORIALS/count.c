#include<stdio.h>
#include<strings.h>
int cnt(char a[],char b[])
{
    int i,j,k,n,m;
    char d[50][50];
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            d[j][k]='\0';
            j++;
            k=0;
        }
        else
        {
            d[j][k]=a[i];
            k++;
        }
    }
    d[j][k]='\0';
     n=0;
    for(i=0;i<j+1;i++)
    {
        if(strcmp(d[i],b)==0)
        {
            n=n+1;
        }
    }
    if(n>0)
    {
        printf("The word has occurred %d times.",n);
    }
    else
    {
        printf("word is not present in the sentence.");
    }
}
void main()
{
    int n;
    char a[50],b[50];
    printf("Enter sentence: ");
    gets(a);
    printf("Enter word whose occurrence has to be counted: ");
    gets(b);
    n=cnt(a,b);
}
