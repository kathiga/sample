#include<stdio.h>
int main()
{
    int n,d,i=0,a[10];
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        a[i]=d;
        i++;
        n=n/10;
    }
    for(i=i-1;i>=0;i--)
    {
        printf(" %d",a[i]);
    }
}
