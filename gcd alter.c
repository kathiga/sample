
#include<stdio.h>
void main()
{
    int n1,n2,i,count=0;
    printf("enter two number");
    scanf("%d%d",&n1,&n2); 
    for(i=2;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
        count++;
        }
        if(count==1)
        printf("\t%d",i);
    }
   
}
