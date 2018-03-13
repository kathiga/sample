#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],c;
	int i;
	printf("enter the string and character");
	scanf("%s",s);
	scanf(" %c",&c);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		{
			printf("\t%d",i+1);
			break;
		}
	}
}
