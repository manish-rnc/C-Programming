#include<stdio.h>
int main()
{
    int x;
    int y,m,d;
    printf("Enter the number of days\n");
    scanf("%d",&x);
    y=x/365;
    m=(x%365)/30;
    d=x-((365*y)+(m*30));
    printf("%d years %d months %d days\n",y,m,d);
    return 0;
}