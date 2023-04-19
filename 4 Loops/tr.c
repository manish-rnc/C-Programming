// Program to find the reverse of a number
#include<stdio.h>
int main()
{
    int x,i,y,rev=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while(x>0)
    {
        y=x%10;
        x=x/10;
        rev=rev*10 + y;
    }
    printf("Reverse= %d",rev);
}