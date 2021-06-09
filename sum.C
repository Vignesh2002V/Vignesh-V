
#include<stdio.h>
#include<conio.h>
int main()
{
 int m,r,sum=0;
 clrscr();
 printf("Enter a number:\n");
 scanf("%d",&m);
 while(m>0)
 {
  r=m%10;
  sum=sum+r;
  m=m/10;
 }
 printf("sum is=%d",sum);
 getch();
 return 0;
}