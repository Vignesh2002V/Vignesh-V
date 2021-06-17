#include<stdio.h>
#include<conio.h>
int main()
{
int mat1[5][5],mat2[5][5],i,j,sum[5][5],n,m;
clrscr();
printf("Enter the number of rows and cols of mat1=");
scanf("%d%d",&n,&m);
printf("Enter the number of rows and cols in mat2=");
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
for(j=0;j<m;j++)  {
printf("element mat1 %d%d",i+1,j+1);
scanf("%d",&mat1[i][j]);
}

for(i=0;i<n;i++)

for(j=0;j<m;j++)  {
printf("element mat2 %d%d",i+1,j+1);
scanf("%d",&mat2[i][j]);
}

for(i=0;i<n;i++)

for(j=0;j<m;j++){
sum[i][j]=mat1[i][j]+mat2[i][j];
}

printf("sum of two matrix=");
for(i=0;i<n;i++)

for(j=0;j<m;j++){
printf(" %d ",sum[i][j]);
if(j==m-1){
printf("\n\n");
}
}
getch();
return 0;
}