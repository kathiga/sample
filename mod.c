#include<stdio.h>
void main()
{
    int a,b,c,num;
    printf("enter a ,b and c value");
    scanf("%d%d%d",&a,&b,&c);
    num=(a*b)%c;
    printf("%d",num);
}
