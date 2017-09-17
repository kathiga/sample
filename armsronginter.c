#include<stdio.h>
void main()
{
int n,a,d,sum=0;
printf("enter the number between 100 to 1000 ");
scanf("%d",&n);
if((n>=100)&&(n<=1000))
{
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
else
printf("enter the value in interval");
}
