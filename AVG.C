
#include<stdio.h>
#include<conio.h>
int main()
{
int a[25], n, i ;
float sum=0,avg;
clrscr();
printf("Enter the Numbers of terms:");
scanf("%d",&n);
printf("\n Enter the Numbers : \n");
for (i=0;i<n;i++)
{
scanf("%d",& a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i] ;
avg=sum/n;
}
printf("\n Average of entered Numbers are : %f ",avg);
getch();
return 0;
}