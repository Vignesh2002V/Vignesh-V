#include<stdio.h>
#include<conio.h>
void main()
{
int key,num,i=0,a[50],first,last,mid;
clrscr();
printf("Enter the number to be found");
scanf("%d",&key);
printf("Enter the number of elements in the array");
scanf("%d",&num);
printf("Enter the array elements");
for(i=0;i<num;i++)
{
    scanf("%d",&a[i]);
}
first=0;
last=num-1;
mid=(first+(last)/2);
i=0;

while(first<=last)
{
    if(a[i]==key)
    {
printf("found");
break;
    }

    if(a[i]<key)
    {
last=mid-1;
    }
    if(a[i]>key)
    {
first=mid+1;
    }

    i++;
}
if(a[i]!=key)
{
    printf("Not Found");
}
getch();
}