#include<stdio.h>
int main()
{
    int a,n,d,s=0,i;
    printf("enter n value");
    scanf("%d",&n);
    printf("\n enter A and D value");
    scanf("%d%d",&a,&d);
    for(i=1;i<n;i++)
    {
    s=s+(a+(n-1)*d);
    }
    printf("%d",s);
}
