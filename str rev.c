#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int l,i;
printf("enter the string");
scanf("%s",a);
l=strlen(a); 
printf("strlrn is %d\n",l);
for(i=l-1;i>=0;i--)
{
printf("%c",a[i]);
}
return 0;
}
