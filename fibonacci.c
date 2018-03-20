#include <stdio.h>
int main()
{
	int f1=1,f2=1,n,z,i;
	printf("enter the number ");
	scanf("%d",&n);
	printf("\n %d\t%d",f1,f2);
	for(i=1;i<=n-2;i++)
	{
		z=f1+f2;
		printf("\t%d",z);
		f1=f2;
		f2=z;
	}
	
}
