#include <stdio.h>
int main(void) 
{
	int n,k,i,sum=1;
	printf("enter the num");
	scanf("%d",&n);
	printf(" \n enter the power");
	scanf("%d",&k);
	if(k==0)
	{
		return 1;
	}
	else if(k==1)
	{
		return n;
	}
	else
	{
		for(i=2;i<=k;i++)
		{
			sum=sum*n;
			}
			return sum;
	}
}
