#include<stdio.h>
#include<conio.h>
float average(int,int,int);
int main()
{
  int a,b,c;
  float avg;
  clrscr();
  printf("Enter three numbers a,b and c\n");
  scanf("%d%d%d",&a,&b,&c);
  avg=average(a,b,c);
  printf("the average is %.2f",avg);
  getch();
  return 0;
}
float average(int x,int y,int z)
{
  float d;
  d=(float)(x+y+z)/3;
  return d;
}
