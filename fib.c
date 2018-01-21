#include <stdio.h>
int main()
{
	int x=1,y=1,n,z,f;
	printf("enter the number ");
	scanf("%d",&n);
	printf("\n %d \t %d",x,y);
	for(f=1;f<=n-2;f++)
	{
		z=x+y;
		printf("\t%d",z);
		x=y;
		y=z;
		
		
	}
