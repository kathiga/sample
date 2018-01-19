#include <stdio.h>
int main()
{
int n,count=0,m;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
    m=n%10;
if(m!=0)
{
    count++;
}
}
printf("\n ",count);
return (0);
}
