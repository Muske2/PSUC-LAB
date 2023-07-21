#include<stdio.h>
void main()
{
    const int MAX=100;
    char a[MAX];
    int i;
    printf("Enter string:");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
        i++;
    }
    puts(a);

}
