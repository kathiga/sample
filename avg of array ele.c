#include<stdio.h>
int main()
{
int a[100],i,n,s=0,avg;
printf("enter the size of array");
scanf("%d",&n);
printf("\n enter the array value");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    s=s+a[i];
}
printf("\n%d",s);
avg=(s/n);
printf("\n avg number is %d",avg);
return (0);
}
