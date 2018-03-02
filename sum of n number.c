#include <stdio.h>
int main() 
{
	int a[100],s=0,j,n;
	printf("enter n value");
  scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	    scanf("%d",&a[j]);
	}
	for(j=0;j<n;j++)
	{
	s=s+a[j];
	}
	printf(" the sum of n number is %d",s );
}
