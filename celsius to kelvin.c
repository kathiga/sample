#include<stdio.h>
void main()
{
    int c;
    float k;
    printf("enter temp in degree celsius");
    scanf("%d",&c);
    k=c+273.15;
    printf("temp in kelvin");
    printf("%.2f",k);
}
