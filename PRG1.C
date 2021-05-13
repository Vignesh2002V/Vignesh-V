 #include<stdio.h>
 #include<conio.h>
 int main()
 {
  float celsius,fahrenheit;
  clrscr();
  printf("Enter the temperature in Fahrenheit:");
  scanf("%f",&fahrenheit);
  celsius=(fahrenheit-32)*5/9;
  printf("%.2f fahrenheit=%.2f celsius ",fahrenheit,celsius);
  getch();
  return 0;
 }