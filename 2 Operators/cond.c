#include<stdio.h>
int main()
{
    int a=1,b=0,v;
    v=a&&b++?a:++b;
    printf("a=%d, b=%d, v=%d",a,b,v);
}