#include<stdio.h>

int main()
{
    int x,a,b,p,q;
    printf("Enter a 5 digit number\n");
    scanf("%d",&x);
    a=x/10000;
    b=(x/1000)%10;
    p=(x%100)/10;
    q=x%10;
    // printf("%d\n%d\n%d\n%d\n",a,b,p,q);
    (b==p)?((a==q)?printf("This is a palindrome"):printf("This is not a palindrome")):printf("This is not a palindrome");
    return 0;
}