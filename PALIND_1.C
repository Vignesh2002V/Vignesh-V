#include <stdio.h>
#include <string.h>
int main()
{
   char Str[100], RevStr[100];
        int i, j, len,c=0 ;
        clrscr();
   printf("\n enter a string to be reversed: ");
   gets(Str);  
   j = 0;
   len = strlen(Str);
   for (i = len - 1; i >= 0; i--)
   {
    RevStr[j++] = Str[i];
   }
   RevStr[i] = '\0';
   printf("\n String after Reversing = %s\n", RevStr);
         for(i=0;i<len/2;i++)  
        {
     if(Str[i]==Str[len-i-1])
     c++;
 
  }
  if(c==i)
      printf("string is palindrome");
    else
        printf("string is not palindrome");    
   getch();
return 0;
}
