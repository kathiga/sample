#include <stdio.h>
#include<string.h>
void main()
{
	int k,i;
	char str[1000];
	printf("\n enter the number");
	scanf("%d",&k);
	printf("\n enter the string");
	scanf("%c",&str);
  if(str!=0)     
  {
	for(i=1;i<=k;i++)
	{
	printf(" \n The string is ",str);
	}
}
}
