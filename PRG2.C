#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int x1,x2,y1,y2;
 float distance;
 clrscr();
 printf("Enter the x and y coordinates of the first point:\n");
 scanf("%d%d",&x1,&y1);
 printf("Enter the x and y coordinates of the second point:\n");
 scanf("%d%d",&x2,&y2);
 distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
 printf("distance=%f",distance);
 getch();
 return 0;
}