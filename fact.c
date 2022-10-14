#include<stdio.h>
int fact(int s)
{
    int f=1;
    while(s>0)
    {
        f=f*s;
        s--;
    }
    return f;
}
void main()
{
    int n,r,p;
    printf("enter the value of n and r=");
    scanf("%d %d",&n,&r);
    p=fact(n)/(fact(n-r)*fact (r));
    printf("the value of n%d c r%d is=%d",n,r,p);
}