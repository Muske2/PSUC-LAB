#include<stdio.h>
void main()
{
    char a[50],b[50];
    int i;
    printf("Enter sentence: ");
    gets(a);
    for(i=0;a[i]!=' ';i++)
    {
        b[i]=a[i];
    }
    printf("First word: %s",b);
}
