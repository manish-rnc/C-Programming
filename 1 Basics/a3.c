#include<stdio.h>

int main()
{
    float tempc,tempf,a,b;
    printf("Enter temperature in celcius here\n");
    scanf("%f",&tempc);
    a=9*tempc;
    b=a+160;
    tempf=b/5;
    printf("Temp in farhenheit is %.2f",tempf);
    return 0;

}