#include<stdio.h>
int main()
{
    int yr;
    printf("Enter a year\n");
    scanf("%d",&yr);
    if (yr%4==0)
    {
        printf("This is a leap year\n");
    }
    else
    {
        printf("This is not a leap year\n");
    }
    return 0;
}