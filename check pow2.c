#include <stdio.h>
int main(void) 
{
int n,i,sum=2,count=0;
printf("enter the num");
scanf("%d",&n);
for(i=1;i<=n;i++)
   {
    sum=sum*2;
    if(n==sum)
    count++;
   
    }
if(count>0)
printf("\n yes");
else
printf("\n no");
}
