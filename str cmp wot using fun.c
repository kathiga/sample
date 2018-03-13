#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int i,s1,s2,count=0;
printf("enter two strings");
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
          if(a[i]==b[i])
        count++;
}
s1=strlen(a);
s2=strlen(b);
if(count==s1&&count==s2)
printf("same");
else
printf("differ");
if(s1>s2)
printf("\n%s",a);
else
printf("\n%s",b);
}
