#include<stdio.h>
int i;
int sum(int a[10])
{
    int s=0;
    for(i=0;i<10;i++)
    {
        s=s+a[i];
    }
     return s;
}
void main()
{
    int a[10],s2;
    printf("enter 10 element of array ");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    s2=sum(a);
    printf("sum of all array element is=%d",s2);
}