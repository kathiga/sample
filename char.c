#include <stdio.h>
int main(void) 
{
    char c;
printf("enter the charactor");
scanf("%s",&c);
if((c=='a')!!(c=='e')!!(c=='i')!!(c=='o')!!(c=='u')!!(c=='A')!!(c=='E')!!(c=='I')!!(c=='O')!!(c=='U'))
printf("given charactor is vowel");
else
printf("given charactor is constant");
}
