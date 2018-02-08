#include<stdio.h>
#include<string.h>
int main()
{
   char a[10],s='*';
   int l,i,m;
   printf("enter the string");
   scanf("%s",a);
   l=strlen(a);
   m=l/2;
   for(i=0;i<l;i++)
   { 
       if(i!=m)
       {
         printf("%c",a[i]);  
       }
       else
       printf("%c",s);
   }
}
