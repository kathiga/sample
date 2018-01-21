#include <stdio.h>
int main()
{
	int a[100],temp,i,j,n;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=1;j<n;j++)
	{
	if(a[i]>a[j])
	{
	temp=a[j];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	printf("\n the min element is %d",a[0]);
	return (0);
}
}
