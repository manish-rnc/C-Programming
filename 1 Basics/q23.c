#include<stdio.h>
int main()
{
    int x;
    printf("Enter the amount\n");
    scanf("%d",&x);
    printf("No. of 2000 rs required--%d\n",x/2000);
    printf("No. of 200 rs required---%d\n",((x/100)%10)/2);
    printf("No. of 100 rs required---%d\n",(x/100)%2);
    printf("No. of 50 rs required----%d\n",(x%100)/50);
    printf("No. of 20 rs required----%d\n",((x%100)%50)/20);
    printf("No. of 5 rs required-----%d\n",(x%10)/5);
    printf("No. of 2 rs required-----%d\n",((x%10)%5)/2);
    return 0;
}