#include <stdio.h>
int main()
{
int t,time,mins;
printf("enter thetime in mins");
scanf("%d",&t);
if(t!=0)
{
time=t/60;
mins=t%60;
printf("\n %d hours %d mins",time,mins);
}
return (0);
}
