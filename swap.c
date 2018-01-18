#include <stdio.h>
void main()
{ 
	int m,n,temp;
	printf("enter two numbers");
	scanf("%d%d",&m,&n);
	temp=m;
	m=n;
	n=temp;
    printf("\n swaped num is %d %d",m,n);
}
