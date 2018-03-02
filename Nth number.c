#include <stdio.h>
int main() 
{
	int a[100],k,i,j,n;
	printf("enter two value");
  scanf("%d%d",&n,&k);
	for(j=0;j<n;j++)
	{
  scanf("%d",&a[j]);
	}
  i=k-1;
  printf("%d",a[i]);
	
}
