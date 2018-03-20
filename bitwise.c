#include <stdio.h>
int main()
{
  int n1,n2;
  printf("enter n1 and n2 value");
  scanf("%d%d",&n1,&n2);
  n1^=n2^=n1^=n2;
  printf("\n SWAP USING BITWISE OPERATOR");
  printf("\n swap value is %d and %d",n1,n2);
  return 0;
}
