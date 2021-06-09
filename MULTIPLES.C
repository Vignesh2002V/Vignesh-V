#include<stdio.h>
#include<conio.h>
int main()
 {
    int a, i;
    clrscr();
    printf("Input an integer: ");
    scanf("%d", &a);
	
    for(i=1;i<=100;i++)
    {
       if(i%a == 0)
     {
	printf("%d\n",i);
     }
   }
	getch();
	return 0;
}
