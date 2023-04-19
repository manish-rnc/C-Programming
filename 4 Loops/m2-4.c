#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=100;i<=1000;i++)
    {
        if(i%9==0 && i%13==0)
        sum=sum+i;
    }
    printf("%d",sum);
}