#include <stdio.h>
void main()
{
	int a[10],temp,i,j;
	printf("enter the numbers");
	for(i=0;i<=10;i++)
	{
	scanf("%d",&a[i]);
	}
	for(j=1;j<=10;j++)
	{
	if(a[i]<a[j])
	{
	temp=a[j];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	printf("\n the max element is %d",a[i]);
}
