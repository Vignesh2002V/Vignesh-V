
#include<stdio.h>
#include<conio.h>
int main()
{
 int m,n;
 clrscr();
 printf("Enter the value of m and n;\n");
 scanf("%d%d",&m,&n);
 while(m<=n)
 {
  if(m%2==0)
  printf("m=%d",m);
  m=m+1;
 }
 getch();
 return 0;
}