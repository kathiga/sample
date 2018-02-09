#include<stdio.h>
#include<string.h>
int main()
{
  int a,b,i,n,count=0;
  printf("enter two numbers");
  scanf("%d%d",&a,&b);
  n=a*b;
  for(i=1;i<=n;i++)
  {
      if(i*i==n)
      count++;
  }
  if(count>=1)
  printf("perfect");
  else
  printf("not a perfect");
}
