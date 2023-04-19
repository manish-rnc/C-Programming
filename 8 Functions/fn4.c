// Function to add two numbers

#include<stdio.h>

int add(int a,int b)
{
    int p=a+b;
    return p;
}
int main()
{
    int x,y,sum;
    printf("Enter 2 nos to add\n");
    scanf("%d%d",&x,&y);
    sum=add(x,y);
    printf("The sum is %d",sum);
}