#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int count=0,i,l;
printf("enter the sentance");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]==' ')
{
count++;
}
}
printf(" %d",count+1);
return 0;
}
