#include<stdio.h>
#include<string.h>
void main()
{
    char name[100][100],temp[100];
    int i,j,n;
    printf("Enter number of names= ");
    scanf("%d",&n);
    printf("Enter names= ");
    for(i=0;i<n;i++)
    {
       scanf("%s",name[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(strcmp(name[i],name[j])>0)
           {
               strcpy(temp,name[i]);
               strcpy(name[i],name[j]);
               strcpy(name[j],temp);
           }
        }
    }
    printf("Alphabetical order of names=\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }


}
