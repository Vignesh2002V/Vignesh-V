#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,mat[3][3],tmat[3][3];
clrscr();
printf("Enter the elements=");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&mat[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
tmat[i][j]=mat[i][j];
}
printf("Enter the transpose=");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("\t %d",tmat[i][j]);
}
getch();
return 0;
}
