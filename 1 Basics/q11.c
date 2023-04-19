#include<stdio.h>

int main()
{
    float radian;
    printf("Enter the value in radian\n");
    scanf("%f",&radian);
    printf("The value in degree is %f",(180*radian)/3.14);
    return 0;
}