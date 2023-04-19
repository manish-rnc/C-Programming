#include<stdio.h>

int main()
{
    float u,a,t;
    printf("Enter the value of u,a and t respectively\n");
    scanf("%f%f%f",&u,&a,&t);
    printf("The value of s=%.2f",u*t+0.5*a*t*t);
    return 0;
}