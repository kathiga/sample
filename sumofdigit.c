#include <stdio.h>
void main()
{
	int n,m,c=0;
	printf("enter the num");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		c=c+m;
		n=n/10;
	}
	printf("\n sum of the num is :%d",c);
}
