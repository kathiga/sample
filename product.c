#include <stdio.h>
void main()
{
	int m,n,p;
	printf("enter two numbers");
	scanf("%d%d",&m,&n);
	p=m*n;
	if(p%2==0)
		printf("the product if given num is even");
	else
	printf("/n the product of given num is odd");
}
