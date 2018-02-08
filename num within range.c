#include<stdio.h>
int main()
{
    int n,f,l;
    printf("enter the number");
    scanf("%d",&n);
    printf("\n enter the first and last number");
    scanf("%d%d",&f,&l);
    if(n>f&&n<l)
    printf("\n yes");
    else
    printf("\n no");
}
