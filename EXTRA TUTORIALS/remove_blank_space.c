#include<stdio.h>
void main()
{
    char a[50];
    int i,j;
    printf("Enter sentence: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            for(j=i;a[j]!='\0';j++)
                a[j]=a[j+1];
        }

    }
    printf("%s",a);
}
