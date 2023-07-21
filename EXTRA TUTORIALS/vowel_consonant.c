#include<stdio.h>
void main()
{
    int i,vow,con;
    char a[50];
    printf("Enter sentence: ");
    gets(a);
    vow=0;con=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            vow=vow+1;
        }
        else
        {
            con=con+1;
        }
        }
    }
    printf("Number of vowels=%d\nNumber of consonants=%d",vow,con);
}
