#include <stdio.h>
int main()
{
  char a[50],i,count=0,count1=0;
  printf("enter the string");
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
  if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
  count++;
  if(a[i]>='0'&&a[i]<='9')
  count1++;
  
  }
  if(count>0&&count1>0)
  printf("yes");
  else
  printf("\n no");
}
