#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int i,l,k,n,count=0;
printf("enter two strings");
scanf("%s",a);
scanf("%s",b);

for(i=0;i!='\0';i++)
{
    
        if(a[i]==b[i])
        count++;
    
}
if(count==strlen(a)&&strlen(b))
printf("yes");;

}
