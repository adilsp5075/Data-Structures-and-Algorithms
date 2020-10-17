#include <stdio.h>
void read(int,int,int [][5]);
void print(int,int [][5]);
int main()
{
int a[5][5],b[5][5],sum[5][5]={0};
int m,num,i,j;
 printf("ENTER THE DIMENSION OF REQUIRED SQUARE MATRIX : ");
  scanf("%d",&m);
 num=1;read(num,m,a);
 num=2;read(num,m,b);
 printf("MATRIX 1 IS:");print(m,a);
 printf("MATRIX 2 IS:");print(m,b);
for(i=0;i<m;i++)
 {for(j=0;j<m;j++)
  {sum[i][j]=a[i][j]+b[i][j];}}
 printf("SUM OF THE TWO MATRICES IS:");print(m,sum);
return 0;
 }

void read(int num,int m,int c[][5])
{
int i,j;
 printf("ENTER THE ELEMENTS FOR MATRIX %d : \n",num);
  for(i=0;i<m;i++)
   {for(j=0;j<m;j++)
    {scanf("%d",&c[i][j]);
     }}}

void print(int m,int d[][5])
 {
int i,j;
 printf("\n");
  for(i=0;i<m;i++)
   {for(j=0;j<m;j++)
    {printf("%d \t",d[i][j]);
     }printf("\n");
      }}
