#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int count=0,i,l;
printf("enter the sentance");
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]=='.')
{
count++;
}
}
printf(" %d",count);
return 0;
}
