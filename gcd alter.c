#include<stdio.h>
void main()
{
    int n1,n2,i,g;
    printf("enter two number");
    scanf("%d%d",&n1,&n2); 
    for(i=2;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
         g=i;
        }
    }printf("gcd is %d",g);
   
}
