#include<stdio.h>
void main()
{
int n,i,c=0;
printf("enter n value");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
c++;
}
if(c==0)
printf("not a composite");
else
printf("composite number");
}
