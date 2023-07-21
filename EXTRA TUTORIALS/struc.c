#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int m[3];
}s[3];
void main()
{
    int i,j;
    printf("Enter name,roll,marks= ");
    for(i=0;i<3;i++)
    {
        scanf("%s%d",s[i].name,&s[i].roll);
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[i].m[j]);
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%s\n%d\n",s[i].name,s[i].roll);
        for(j=0;j<3;j++)
        {
            printf("%d\t",s[i].m[j]);
        }
        printf("\n");
    }

}
