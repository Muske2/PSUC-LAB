#include<stdio.h>
void main()
{
    const int MAX=100;
   char a[MAX];
   int cnt,i;
   printf("Enter sentence: ");
   gets(a);
   cnt=1;
  while(a[i]!='\0')
   {
       if(a[i]==' '&& a[i+1]!=' ')
   {
      cnt=cnt+1;
   }
   i++;
   }
   printf("%d",cnt);
}
