#include<stdio.h>
#include<conio.h>
int hrs_to_min(int hrs,int minutes);
void main()
 {
  int hrs,mins,total_mins;
  clrscr();
  printf("enter hours and minutes:");
  scanf("%d%d", &hrs,&mins);
  total_mins=hrs_to_min(hrs,mins);
  printf("\ntotal minutes=%d_mins",total_mins);
  getch();
 }
 int hrs_to_min(int hrs,int mins)
 {
   mins=(hrs*60)+mins;
   return mins;
 }

