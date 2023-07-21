#include<stdio.h>
 void main()
{
    char ch[]="*****";
    char c='A';
    int i=0;
    printf("Enter password: ");
    while(c)
    {
        c=getch();
        printf("%c\a",ch[i]);
        i++;
        if(i==5)
        {
            i=0;
        }
    }
}
