#include <stdio.h>

int main()
{
   char c;
   printf("enter the letter");
   scanf("%c",&c);
   if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
   {
   printf("\n alphabets");
   }
   else 
   {
   	printf("\n not an alphabet");
   }
   return (0);
}
