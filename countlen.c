#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[100],c=0,i;
    printf("enter the string=");
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        c++;
    }
    printf("string length is=%d",c);
    return 0;
}