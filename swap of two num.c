#include <stdio.h>
void main()
{ 
	int n1,n2,t;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	t=n1;
	n1=n2;
	n2=t;
  printf("\n swaped num is %d %d",n1,n2);
}
