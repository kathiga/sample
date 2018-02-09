#include<stdio.h>
void main()
{
int n,i;
printf("enter  value");
scanf("%d",&n);
printf("1");
for(i=2;i<n;i++)
{
if(n%i==0)
printf("\t%d",i);
}
}
