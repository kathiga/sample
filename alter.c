#include<stdio.h>
void main()
{
    int a[10];
    int n,k,i,count=0,num;
    printf("enter array size n and k valure");
    scanf("%d%d",&n,&k);
    num=k;
    printf("enter array element");
   
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==num);
        
        count++;
    }
    if(count==1)
    printf("\n yes");
    if(count=0)
    printf("\n no");
    
  }
