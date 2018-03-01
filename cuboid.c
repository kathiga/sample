#include<stdio.h>
void main()
{
    float l,b,h,area,volume;
    printf("enter length,width and height");
    scanf("%f%f%f",&l,&b,&h);
    area=l*b*h;
    volume=(2*l)*(2*l*b)*(2*l*b*h);
    printf("surface area is %f\nvolume is %f",area,volume);
}
