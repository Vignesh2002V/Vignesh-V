#include<stdio.h>
#include<conio.h>
int main()
{
 int a[50],max,min,maxpos,minpos,i,temp,n;
 clrscr();
 printf("Enter the number of values in an array\n ");
 scanf("%d",&n);
 printf("Enter the elements of array\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 max=a[0];
 min=a[0];
 maxpos=0;
 minpos=0;
 for(i=1;i<n;i++)
 {
  if(a[i]>max)
  {
   max=a[i];
   maxpos=i;
  }
  if(a[i]<min)
  {
   min=a[i];
   minpos=i;
  }
 }
 temp=a[maxpos];
 a[maxpos]=a[minpos];
 a[minpos]=temp;
 printf("After interchange array elemnts are: ");
 for(i=0;i<n;i++)
 printf("%d",a[i]);
 getch();
 return 0;
}