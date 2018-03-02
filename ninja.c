#include<stdio.h>
void main()
{
 int n1,n2,i;
    printf("enter kabali and his opponent number");
    scanf("%d%d",&n1,&n2);
    if(n1>0&&n2>0)
    {
        if(n2>n1)
        printf("%d",n2-n1);
        else
        {
         printf("opponent number should be greater than kabali numbar ");
        }
    }
}
