#include<stdio.h>

int main()
{
    int sec,sec1,sec2;
    printf("Enter 1st time in secs\n");
    scanf("%d",&sec1);
    printf("Enter 2nd time in secs\n");
    scanf("%d",&sec2);
    sec=sec1+sec2;
    printf("%d Hours",sec/3600);
    printf(" %d mins",(sec/60)%60);
    printf(" %d secs\n",sec%60);
    return 0;
}