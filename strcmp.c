#include<stdio.h>
#include<string.h>
int main()
{
char x[100],y[100];
int i,j,l1,l2,count=0;
printf("enter two strings");
gets(x);
gets(y);
for(i=0;x[i]!='\0';i++)
{
   
        if(x[i]==y[i])
        count++;
}
l1=strlen(x);
l2=strlen(y);
if(count==l1&&count==l2)
printf("same");
else
printf("differ");

}
