#include<stdio.h>
void main()
{
int n,a,d,sum=0;
printf("enter the number ");
scanf("%d",&n);
a=n;
while(a!=0)
{
d=a%10;
sum=sum+d*d*d;
a=a/10;
}
if(sum==n)
printf("given number is armstrong ");
else
printf("noy armstrong number");
}

