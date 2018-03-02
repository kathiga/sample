#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int i,j,s1,s2,count=0;
printf("enter a strings");
gets(a);

for(i=0;a[i]!='\0';i++)
{
   for(j=1;a[j]!='\0';j++)
   {
    if(a[i]==a[j])
    count++;
   }
}
if(count>0)
printf("\n no");
else
printf("\n yes");
}
