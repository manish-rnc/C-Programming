// Program to print the sum of series 1+2+3+.......+n

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n;
        n--;
    }
    printf("The sum of the series is %d\n",sum);
}