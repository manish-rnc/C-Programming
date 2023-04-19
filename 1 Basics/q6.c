#include<stdio.h>

int main()
{
    float rad;
    float side;
    printf("Enter the radius of the circle\n");
    scanf("%f",&rad);
    side=sqrt(3.14)*rad;
    printf("The area of the square is %f\n",side*side);
    printf("The perimeter of the square is %f",4*side);
    return 0;
}