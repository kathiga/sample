#include <stdio.h>
int main(void) 
{
	int n,i,sum=1;
	printf("enter the num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum=i*n;
	printf(" \t %d",sum);
	}
	return 0;
}
