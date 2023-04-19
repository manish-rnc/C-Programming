#include<stdio.h>
int main()
{
    float x;
    printf("Enter a floating point number\n");
    scanf("%f",&x);
    int a= (int)x;
    float y=x-a;
    if(y<0.5)
    {
        printf("The round off value is %d\n",a);
    }
    else
    {
        printf("The round off value is %d",a+1);
    }
    return 0;
}