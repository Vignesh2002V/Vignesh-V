#include<stdio.h>
#include<conio.h>
int main()
{
 char pa[100],ma[100];
 int i, length = 0;
 clrscr();
printf("\nEnter the string :");
 gets(pa);
 i = 0;
 while (pa[i] != '\0')
 {
 ma[i] = pa[i];
 i++;
 }
 ma[i] = '\0';
 for (i = 0; ma[i] != '\0'; i++)
 {
 length++;
 }

 printf("\n Copied String is %s\n ", ma);
 printf("The length of a string is the number of characters in it\n");
  printf("so,the length of %s=%d\n",ma,length);
 getch();
 return (0);
}

