#include<stdio.h>
void main()
{
int n,i,count=0;
printf("enter n value");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
count++;
}
if(count==0)
printf("given number is prime");
else
printf("not a prime number");
}
