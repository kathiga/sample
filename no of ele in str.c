#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],c;
	int i,count=0;
	printf("enter the string and character");
	scanf("%s",s);
	scanf(" %c",&c);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		{
		count++;
		}
	}
	printf("%d",count);
}
