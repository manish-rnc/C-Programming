#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,theta;
    printf("Enter the polar coordinates\n");
    scanf("%f%f",&r,&theta);
    x=r*cos(theta);
    y=r*sin(theta);
    printf("The cartesian coordinates are (%f,%f)",x,y);
    return 0;
}