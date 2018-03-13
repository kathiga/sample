#include<stdio.h>
#include<string.h>
void main()
{
        char c[20],i;
        int count=0;
        printf("enter the string");
        scanf("%s",c);
        for(i=0;c[i]!='\0';i++)
        {
                count++;
        }
        printf("\n %d",count);
}
