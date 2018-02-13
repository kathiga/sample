#include<stdio.h>
int main()
{
int t1,t2,t,m1,m2,m;
printf("enter time for t1 and min for m1");
scanf("%d%d",&t1,&m1);
printf("enter time for t2 and min for m2");
scanf("%d%d",&t2,&m2);
t=t1-t2;
m=m1-m2;
if(m>=60)
{
t=t+1;
m=m-60;
}
printf("the time and min is %d %d",t,m);
return 0;
}
