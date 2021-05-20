#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
 clrscr();
 printf("Enter a,b and c\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a<=b && a<=c)
 printf("%d is smallest",a);
 else if(b<=c && b<=a)
 printf("%d is smallest",b);
 else
 printf("%d is smallest",b);
 getch();
 return 0;
}