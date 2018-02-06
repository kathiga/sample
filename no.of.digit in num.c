#include<stdio.h>
#include<string.h>
int main()
{
int n,i,d,count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
    d=n%10;
    n=n/10;
    if(d!=0)
    {
    count++;
}  
}
printf("%d",count);
}
