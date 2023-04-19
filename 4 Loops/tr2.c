// Program to find the sum of the digits of a number
#include<stdio.h>
int main()
{
    int x,i,y,sum=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while(x>0)
    {
        y=x%10;
        x=x/10;
        sum=sum + y;
    }
    printf("Sum= %d",sum);
}