#include<stdio.h>
void main()
{
    int n,d,c=1;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        c=d*c;        
        n=n/10;
    }
    printf("%d",c);
}
