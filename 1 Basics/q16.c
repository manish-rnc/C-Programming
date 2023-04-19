#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,sum;
    printf("Enter the value of n\n",n);
    scanf("%d",&n);
    s=(n*(n+1))/2;
    sum=pow(s,2);
    printf("The sum of the series is %d",sum);
    return 0;
}