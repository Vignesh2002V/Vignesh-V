
#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i,sum=0;
 clrscr();
 printf("\nEnter the number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
  sum+=((2*i)-1)*((2*i)-1);
 }
 printf("\nthe sum of squares of first %d odd numbers is : %d",num,sum);
 getch();
}