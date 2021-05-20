
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int a,b,c,disc;
 float root1,root2,imaginary,real;
 clrscr();
 printf("Enter values of a,b,c of quadratic equation:");
 scanf("%d%d%d",&a,&b,&c);
 disc=b*b-4*a*c;
 if(disc>0)
 {
  root1=(-b+sqrt(disc))/(2*a);
  root2=(-b-sqrt(disc))/(2*a);
  printf("two distinct and real roots exists:%f and %f",root1,root2);
 }
 else if(disc==0)
 {
  root1=root2=-b/(2*a);
  printf("two equal and real roots exists:%f and %f",root1,root2);
 }
 else if(disc<0)
 {
  real=(float)-b/(2*a);
  imaginary=sqrt(-disc)/(2*a);
  printf("two distinct complex roots exists:%f+i%f and %f-i%f",real,imaginary,real,imaginary);
 }
 getch();
 return 0;
}