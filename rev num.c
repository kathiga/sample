#include<stdio.h>
void main()
{
    int n,d,num=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        num=d+(num*10);
        n=n/10;
    }
    printf("%d",num);
}
