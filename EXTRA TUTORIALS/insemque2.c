#include<stdio.h>
void replaceZero(int a[][100], int m, int n){
 int row[100]={0}, column[100]={0};
 int i,j;
 for (i = 0; i < m; i++)
 for (j = 0; j < n; j++)
 if (a[i][j] == 0) {
 row[i] = 1;
 column[j] = 1;
 } // 1m (Row & Col Array logic)
 //Elements in Row or Col set to 0 in 2D array
 for (i = 0; i < m; i++)
 for (j = 0; j < n; j++)
 if (row[i] || column[j])
 a[i][j] = 0;
}
int main()
{
 int m,n,a[100][100];
 int i,j;
 printf("enter dimension for the Matrix:");
 scanf("%d%d",&m,&n);
 printf("\n enter elements\n");
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 scanf("%d",&a[i][j]); // 1m (Input/ Output)
 replaceZero(a,m,n);
 for(i=0;i<m;i++){
 for(j=0;j<n;j++)
 printf("%d\t",a[i][j]);
 printf("\n");
 }
}
