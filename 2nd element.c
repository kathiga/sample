#include<stdio.h>
int main()
{
int a[100],i,j,n,temp;
printf("enter the size of array");
scanf("%d",&n);
printf("\n enter the array value");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf(" \t%d",a[i]);
}
printf("\nsecond smallest element is %d",a[1]);
return (0);
}
