#include <stdio.h>

int main(void) {
	char a[100];
	int sum=0,i,n;
  printf(" enter n value");
  scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum=sum+i;
	}
	printf(" the sum of n number is %s",sum );
}
