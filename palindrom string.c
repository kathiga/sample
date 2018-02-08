#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i,j,l;
    char a[10];
    printf("enter the string");
    scanf("%s",a);
    l=strlen(a);
    for(i=0,j=l-1;a[i]!='\0';i++,j--)
    {
        if(a[i]==a[j])
        {
            count++;
        }

    }
    printf("%d",count);
    if(count==l)
    {
        printf("\n yes");
    }
    else
    {
        printf("\n no");
    }
}
