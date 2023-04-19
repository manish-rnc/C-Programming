#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter a number\n");
    scanf("%d",&x);
    y=x;
    while(x!=0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    if(y%sum==0)
    {
         printf("%d is divisible by its sum of the digits\n",y);
    }
    else
    {
         printf("%d is not divisible by its sum of the digits\n",y);
    }
}