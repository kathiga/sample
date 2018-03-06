#include<stdio.h>
#include<string.h>
void main()
{
    char s[10];
    int i,l,count=0;
    printf("enter the string");
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
            if(s[i]>='0'&&s[i]<='9')
            {
                    count++;
            }
    }
   if(count>0)
   printf("\n yes");
   else
   printf("\n no");
}
