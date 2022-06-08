#include<stdio.h>
#include<conio.h>
void main()
{
    int n,num,i=0,a[50];
printf("Enter the number to be found");
scanf("%d",&n);
printf("Enter the number of elements in the array");
scanf("%d",&num);
printf("Enter the array elements");
for(i=0;i<num;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
    if(a[i]==n)
    {
        printf("Found");
        break;
    }
}
if(a[i]!=n)
{
    printf("Not Found");

}
}
