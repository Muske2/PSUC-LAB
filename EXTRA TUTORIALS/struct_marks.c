#include<stdio.h>
struct marks
{
    int s1;
    int s2;
    int s3;
}a[3];
void main()
{
    int i;
    printf("ENTER marks in s1 s2 s3= ");
    for(i=0;i<3;i++)
    {
         scanf("%d%d%d",&a[i].s1,&a[i].s2,&a[i].s3);
    }
     for(i=0;i<3;i++)
    {
        printf("Student %d marks=\n",i+1);
         printf("s1=%d\ns2=%d\ns3=%d\n",a[i].s1,a[i].s2,a[i].s3);
    }


}
