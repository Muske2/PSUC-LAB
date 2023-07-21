#include<stdio.h>
void main()
{
  int i=3,j=2;
  while(i++<5)
  {
      for(;++j<5;)
      {
          printf("\n%d%d",i&1,j|2);
      }
  }
}
