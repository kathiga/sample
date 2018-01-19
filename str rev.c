#include<stdio.h>
#include<string.h>
int main()
{
char a[789];
printf("enter the string");
gets(a);
strrev(a);
printf("the revered string is",a);
return 0;
}
