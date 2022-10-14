#include<stdio.h>
int i;
void table(int n)
{
for(i=1;i<=10;i++)
{
    printf("%d \t",n*i);
}
}
void main()
{
    int n;
    printf("enter the no=");
    scanf("%d",&n);
    table(n);
}