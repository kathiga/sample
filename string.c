#include<stdio.h>
#include<string.h>
void main()
{int i,j,k,s,m=0,count=0,point,max=3,p;
char a[100],b[100],c[100];
	scanf("%s",a);
	i=0;
	m=0;
	s=0;
	p=(strlen(a)/2);
	while(a[i]!='\0')
	{
		j=i-1;
		k=i+1;
		if(a[j]==a[k])
		{
			for(s=j;s<=k;s++)
			{
				b[m]=a[s];
				m++;
			}
			break;
		}
		else
		i++;
	}
	printf("shortest pallindrome is %s\n",b);
	i=0;
	m=0;
	i=p;
			j=i-1;
		k=i+1;
		while(a[j]==a[k]&&a[k]!='\0'&&i!=-1)
		{
		j--;
		k++;
		}
		m=0;
		for(s=j+1;s<=k-1;s++)
		{
			c[m]=a[s];
			m++;
		}
printf("the longest pallindrome is %s",c);
}
