#include<stdio.h>
int s=0;
int sum(int n)
{
  while(n>0)
  {
      s=s+n%10;
      n=n/10;
  }
  return s;
}
void main()
{
    int n,s4;
    printf("enter the no");
    scanf("%d",&n);
    s4=sum(n);
    printf("sum of the no is=%d",s4);
}