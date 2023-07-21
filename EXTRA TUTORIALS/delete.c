#include<stdio.h>
#include<strings.h>
char del(char a[],char b[])
{
    int i,j,k;
    char d[50][50];
    j=0;k=0;
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
    j=0;
    for(i=0;i<k+1;i++)
    {
        if(strcmp(d[i],b)==0)
        {
            d[i][j]='\0';
        }
    }
   printf("The sentence is: ");
   j=0;
    for(i=0;i<k+1;i++)
    {
        if(d[i][j]=='\0')
        {
            continue;
        }
        else
        {
            printf("%s ",d[i]);
        }
    }
}
void main()
{
    char str[50],word[50],n;
    printf("Enter sentence: ");
    gets(str);
    printf("Enter word to be deleted: ");
    gets(word);
    n=del(str,word);
}
