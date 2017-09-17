#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0,i;
printf("enter the number");
scanf("%d"&num);
if(num!=0)
{
i=num%10;
sum=sum+i;
num=num/10;
}
}
