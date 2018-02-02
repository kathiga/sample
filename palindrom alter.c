#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char s[10],r[10],l;
    printf("enter the string");
    scanf("%s",s);
    l=strlen(s);
    printf("%d\n",l);
    for(i=0;i<l;i++)
    {
        r[i]=s[i];
    }
    for(i=l;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    for(i=0;i<l;i++)
    {
        if(s[i]==r[i])
        {
            count++;
        }
    }
    if(count>0)
    {
    printf("\n yes");
    }
    else
    {
    printf("\n no");
    }
}
