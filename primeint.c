#include<stdio.h>
void main()
{
int n,i=2,count=0;
printf("enter n value between  2 to 50");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
count++;
}
if(count==1)
printf("given number is prime");
else
printf("not a prime number");
}
