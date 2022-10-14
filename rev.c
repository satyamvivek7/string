#include<stdio.h>
#include<conio.h>
int rv=0,n;
int rev()
{
    
    printf("enter the no=");
    scanf("%d",&n);
    while(n>0)
    {
        rv=rv*10+n%10;
        n=n/10;
    }
    return rv;
}
void main()
{
    int s;
    s=rev();
    printf("the reverse no is=%d",s);
}