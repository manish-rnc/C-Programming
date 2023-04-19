#include<stdio.h>

int main()
{
    int x;
    printf("Enter a 4 digit number\n");
    scanf("%d",&x);
    printf("The sum of first and last digit of the number is %d",x/1000+x%10);
    return 0;
}