#include<stdio.h>

int main()
{
    float f;
    printf("Enter a floating point number\n");
    scanf("%f",&f);
    int x=(int) f;                 //typeconversion
    printf("%d",x%100);
    return 0;
}