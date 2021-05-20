
#include<stdio.h>
#include<math.h>
#include<conio.h>
float area(int x,int y,int z);
int main()
{
 int a,b,c;
 clrscr();
 printf("\n Enter the first side of the triangle:");
 scanf("%d",&a);
 printf("\n Enter the second side of the triangle:");
 scanf("%d",&b);
 printf("\n Enter the third sid of the triangle:");
 scanf("%d",&c);
 printf("\n Area of the triangle=%f\n",area(a,b,c));
 getch();
 return 0;
}
float area(int x,int y,int z)
{
 float s,area;
 s=(float)(x+y+z)/2;
 printf("\n Perimeter=%f",s);
 area=sqrt(s*(s-x)*(s-y)*(s-z));
 return area;
}