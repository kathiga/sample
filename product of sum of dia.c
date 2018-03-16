#include<stdio.h>
void main()
{
int a[10][10],i,j,n,d,sum=0,num=0;
printf("enter the n value:\t");
scanf("%d",&n);
printf("enter the array values:");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)  
{
scanf("%d\t",&a[i][j]);    
}
printf("\n");
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
 if(i==j)
 {
     sum=sum+(a[i][j]);
 }
}
}
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
         if((i+j)==(n+1))
 {
     num=num+(a[i][j]);
 }
}
}
d=sum*num;
printf("the product of sum of diagonals are:%d",d);
}
