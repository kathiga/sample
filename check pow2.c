#include <stdio.h>
int main(void) 
{
	int n,s,i,sum=0,count=0;
	printf("enter the num");
	scanf("%d",&n);
   for(i=1;i<n;i++)
   {
        sum=i*2;
        printf("\nsum:%d",sum);
        s=sum*2;
        printf("s:%d",s);
    /*if(n==sum)
   count++;
   sum=0;*/
    }
    if(count>0)
    printf("\n yes");
}
