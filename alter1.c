#include<stdio.h>
int main()
{
	int n,f,d,i,m;
	printf("enter the total num in series");
	scanf("%d",&n);
	printf("\n enter the first num");
	scanf("%d",&f);
	printf("\n enter the different");
	scanf("%d",&d);\
	printf("%d",f);
	for(i=1;i<n;i++)
	{
		m=f+d;
		printf(" %d",m);
	}
}
