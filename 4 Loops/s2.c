// Program to print the sum of series 1^x + 2^x + 3^x + ....... +n^x

#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,sum=0;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&x);
    while(n>0)
    {
        sum=sum+pow(n,x);
        n--;
    }
    printf("The sum of the series is %d\n",sum);
}