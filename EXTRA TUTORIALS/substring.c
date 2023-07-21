#include<stdio.h>
#include<strings.h>
char sub(char a[],char b[])
{
    char d[50][50];
    int i=0,j=0,k=0,flag=0,p;
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
    j=0; p=0;
    for(i=0;i<k+1;i++)
    {
        if(strcmp(d[i],b)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Search successful.");
    }
    else
    {
        printf("Search unsuccessful.");
    }
}
void main()
{
    char str[50],word[50],s;
    printf("Enter string: ");
    gets(str);
    printf("Enter substring to be searched: ");
    gets(word);
    s=sub(str,word);
}
