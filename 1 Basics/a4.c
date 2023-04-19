#include<stdio.h>

int main()
{
    int x=5,y=6;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The values of x is %d and the value of y is %d",x,y);
    return 0;
}