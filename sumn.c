#include <stdio.h>

int main() 
{
	int a[100],sum=0,i,n;
	printf("enter n value");
        scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];
	}
	printf(" the sum of n number is %d",sum );
}
