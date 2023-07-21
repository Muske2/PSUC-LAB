#include<stdio.h>
int CornerSum(int r,int c)
{
    int a[50][50],i,j,sum;
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    sum=a[0][0]+a[r-1][0]+a[0][c-1]+a[r-1][c-1];
    return(sum);
}
void main()
{
    int r,c,sum;
    printf("Enter number of rows and columns= ");
    scanf("%d%d",&r,&c);
    printf("Enter elements= ");
    sum=CornerSum(r,c);
    printf("Corner sum= %d",sum);

}
